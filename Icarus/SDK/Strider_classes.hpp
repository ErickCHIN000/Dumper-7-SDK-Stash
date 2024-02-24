#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Strider.StriderMath
class UStriderMath : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStriderMath* GetDefaultObj();

	float WrapAngle(float Angle);
	void MoveTowardVector(struct FVector* InStart, struct FVector& End, float MaxDelta);
	float MoveTowardAngle(float StartAngle, float EndAngle, float MaxDelta);
	float MoveToward(float Start, float End, float MaxDelta);
	void MoveComponentsToward(struct FVector* InStart, struct FVector& End, float MaxDelta);
	float GetRotationRelativeToVelocity(class AActor* Actor);
	int32 GetNextCardinalDirection(int32 CurrentCardinalDirection, float RelativeDirection, float StepDelta, float SkipDelta);
	float GetAngleDelta(float StartAngle, float EndAngle);
	float CalculateStrideScale(float TotalSpeedScale, float PlayRate);
	float CalculatePlayRate(float TotalSpeedScale, float PlaybackWeight, float MinPlayRate, float MaxPlayRate);
	float CalculateCircleStrafeDirectionDelta(float LastDirection, float Direction, float DeltaTime);
	float AngleBetween(struct FVector& A, struct FVector& B);
};

}


