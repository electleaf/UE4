// Fill out your copyright notice in the Description page of Project Settings.


#include "MainAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"


void UMainAnimInstance:: NativeIntializeAnimation() 
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}
}

void UMainAnimInstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}
	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LaterakSpeed = FVector(Speed.X, Speed.Y, 0.f);
		MovementSpeed = LaterakSpeed.Size();
		bIsInAir = Pawn->GetMovementComponent()->IsFalling();
		//TODO Added in 2024 for reducing the jump time of the player.
		JumpDownForce = FVector(2.0f, 2.0f, 0.f);
	
	}
}