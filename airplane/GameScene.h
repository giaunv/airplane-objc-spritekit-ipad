//
//  GameScene.h
//  airplane
//

//  Copyright (c) 2015 366. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import <CoreMotion/CoreMotion.h>

static const uint8_t bulletCategory = 1;
static const uint8_t enemyCategory = 2;

@interface GameScene : SKScene<UIAccelerometerDelegate, SKPhysicsContactDelegate>{
    CGRect screenRect;
    CGFloat screenHeight;
    CGFloat screenWidth;
    double currentMaxAccelX;
    double currentMaxAccelY;
}

@property (strong, atomic) CMMotionManager *motionManager;
@property SKSpriteNode *plane;
@property SKSpriteNode *planeShadow;
@property SKSpriteNode *propeller;
@property SKEmitterNode *smokeTrail;
@property NSMutableArray *explosionTextures;
@property NSMutableArray *cloudsTextures;
@end