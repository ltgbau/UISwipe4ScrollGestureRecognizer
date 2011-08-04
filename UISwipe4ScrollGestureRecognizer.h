//
//  UISwipe4ScrollGestureRecognizer.h
//  Pulse
//
//  Created by Jose Luis Campaña Perez on 04/08/11.
//  Copyright 2011 Layers.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#ifndef __UISWIPE4SCROLLGESTURERECOGNIZER_H__
#define __UISWIPE4SCROLLGESTURERECOGNIZER_H__


@interface UISwipe4ScrollGestureRecognizer  : UIPanGestureRecognizer<UIGestureRecognizerDelegate> {
    #define SWIPE_THRESHOLD     3000
    #define NO_DIR              -1
    BOOL _panning;
    CGFloat _touchSpeed;

    UISwipeGestureRecognizerDirection _direccion;
    UISwipeGestureRecognizerDirection _direccionDelegate;
    id<UIGestureRecognizerDelegate> m_delegate;
    
    id m_target;
    SEL m_callback;
}

@property(nonatomic,assign) id<UIGestureRecognizerDelegate> delegate;
@property(nonatomic,assign) id target;
@property(nonatomic,assign) SEL callback;
@property(nonatomic,readonly) UISwipeGestureRecognizerDirection direction;
@property(nonatomic) CGFloat swipeVelocityInView;

- (id)initWithTarget:(id)target action:(SEL)action;


- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer;
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer;
-(void)setDirection:(UISwipeGestureRecognizerDirection)direction;
-(void)callback:(UIGestureRecognizer*)recognizer;
@end

#endif  // end of __UISWIPE4SCROLLGESTURERECOGNIZER_H__


