//
//  collisions.h
//  Space Invaders
//
//  Created by Nicola Lancellotti on 3/31/15.
//  Copyright (c) 2015 Nicola Lancellotti. All rights reserved.
//

#ifndef __Space_Invaders__collisions__
#define __Space_Invaders__collisions__

#include <stdio.h>
#include <stdbool.h>
#include "glutCrossPlatform.h"
#include "boundingBox.h"

bool isCollision(const boundingBox_t bb1, const boundingBox_t bb2, GLfloat error);

#endif /* defined(__Space_Invaders__collisions__) */
