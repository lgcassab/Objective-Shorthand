//
//  NSArray+FunctionalMethods.h
//  Objective-Shorthand
//
//  Created by Soroush Khanlou on 12/10/13.
//  Copyright (c) 2013 Soroush Khanlou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (FunctionalMethods)

/**
 *  Returns a new array with only the objects that return `YES` to the `test` block. This function corresponds to `select` or `filter` in other programming languages.
 *
 *  @param test A block that returns a BOOL that determines whether a given object should be included in the result array. The block takes a parameter `object` and is called on each element in the array sequentially.
 *
 *  @return A new array with only the objects passing the test.
 */
- (NSArray*) arrayBySelectingItemsPassingTest:(BOOL (^)(id object))test;

/**
 *  Returns a new array with the objects that return `YES` to the `test` block removed. This function corresponds to `reject` in other programming languages.
 *
 *  @param test A block that returns a BOOL that determines whether a given object should be removed from the result array. The block takes a parameter `object` and is called on each element in the array sequentially.
 *
 *  @return A new array with only the objects failing the test.
 */
- (NSArray*) arrayByRejectingItemsPassingTest:(BOOL (^)(id object))test;



/**
 *  Returns a new array with the objects that are returned by the block parameter. This function corresponds to `map` or `collect` in other programming languages.
 *
 *  @param block A block that returns a new object to be included in the new array. The block takes a parameter `object` and is called on each element in the array sequentially.
 *
 *  @return A new array with only the objects failing the test.
 */
- (NSArray*) arrayByTransformingObjectsUsingBlock:(id (^)(id object))block;

/**
 *  Returns an `accumulator` object after it has been called against every object in the array. This function corresponds to `reduce` or `inject` in other programming languages.
 *
 *  @param block A block that returns the `accumulator` after the `object` has been incorporated into the accumulator. The block takes a parameters `accumulator` and `object` and is called on each element in the array sequentially.
 *
 *  @return The accumulator after all objects have bene incorporated into it.
 */
- (id) objectByReducingObjectsIntoAccumulator:(id)accumulator usingBlock:(id (^)(id accumulator, id object))block;



/**
 *  Returns `YES` if all objects in the array return `YES` to the `test` block. This function corresponds to `all` in other programming languages. If any objects fail the test, the enumeration is short-circuited and ends early.
 *
 *  @param test A block that returns a BOOL that determines if the object passes the test. The block takes a parameter `object` and is called on each element in the array sequentially.
 *
 *  @return `YES` if all objects in the array pass the test, otherwise `NO`
 */
- (BOOL) allObjectsPassTest:(BOOL (^)(id object))test;

/**
 *  Returns `YES` if any of the objects in the array return `YES` to the `test` block. This function corresponds to `any` in other programming languages. If any objects passes the test, the enumeration is short-circuited and ends early.
 *
 *  @param test A block that returns a BOOL that determines if the object passes the test. The block takes a parameter `object` and is called on each element in the array sequentially.
 *
 *  @return `YES` if any one object in the array passes the test, otherwise `NO`
 */
- (BOOL) anyObjectsPassTest:(BOOL (^)(id object))test;

/**
 *  Returns `YES` if no objects in the array return `YES` to the `test` block. This function corresponds to `none` in other programming languages. If any object passes the test, the enumeration is short-circuited and ends early.
 *
 *  @param test A block that returns a BOOL that determines if the object passes the test. The block takes a parameter `object` and is called on each element in the array sequentially.
 *
 *  @return `YES` if no objects in the array pass the test, otherwise `NO`
 */
- (BOOL) noObjectsPassTest:(BOOL (^)(id object))test;

@end
