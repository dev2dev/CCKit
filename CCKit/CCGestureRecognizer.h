//
//  CCGestureRecognizer.h
//  CCExtensions
//
//  Created by Jerrod Putman on 7/29/11.
//  Copyright 2011 Tiny Tim Games. All rights reserved.
//
//  Portions created by Joe Allen, Glaivare LLC.
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights
//	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//	copies of the Software, and to permit persons to whom the Software is
//	furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//	THE SOFTWARE.
//

// The interface for Cocos2D gesture recognizer support.
@interface CCGestureRecognizer : NSObject <UIGestureRecognizerDelegate>

#pragma mark - Properties

// The gesture recognizer itself.
@property(nonatomic, strong, readonly) UIGestureRecognizer* gestureRecognizer;

// The node that this recognizer is watching for input.
@property(nonatomic, weak, readonly) CCNode *node;


#pragma mark - Creating the gesture recognizer

+ (id)recognizerWithRecognizer:(UIGestureRecognizer*)gestureRecognizer target:(id)target action:(SEL)action;
- (id)initWithRecognizer:(UIGestureRecognizer*)gestureRecognizer target:(id)target action:(SEL)action;


@end


#pragma mark -


// Additions to CCNode to allow better integration with gesture recognizers.
@interface CCNode (GestureRecognizerAdditions)

- (void)addGestureRecognizer:(CCGestureRecognizer *)gestureRecognizer;
- (void)removeGestureRecognizer:(CCGestureRecognizer *)gestureRecognizer;

- (BOOL)isPointInArea:(CGPoint)pt;
- (BOOL)isNodeInTreeTouched:(CGPoint)pt;

@end
