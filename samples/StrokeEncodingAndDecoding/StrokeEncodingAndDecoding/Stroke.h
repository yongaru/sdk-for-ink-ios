//
//  Stroke.h
//  StrokeModelAndPersistance
//
//  Created by Plamen Petkov on 10/1/14.
//
//

#import <WILLCore/WILLCore.h>

@interface Stroke : NSObject

+(Stroke*) strokeWithPoints:(WCMFloatVector*)points andStride:(int)stride andWidth:(float)width andColor:(UIColor*)color andTs:(float)ts andTf:(float)tf andBlendMode:(WCMBlendMode)blendmode;

@property float width;
@property UIColor* color;
@property int stride;
@property float ts, tf;
@property WCMBlendMode blendMode;

@property (readonly) WCMFloatVector* points;

@end
