#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class MarketingCamera.BPFinder
class UBPFinder : public UObject
{
public:
	uint8                                        Pad_240[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBPFinder* GetDefaultObj();

};

// 0xB8 (0x2D8 - 0x220)
// Class MarketingCamera.MarketingCameraActor
class AMarketingCameraActor : public AActor
{
public:
	bool                                         AltControls;                                       // 0x220(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_348[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoveInterpSpeed;                                   // 0x224(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveInterpStep;                                    // 0x228(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LookInterpSpeed;                                   // 0x22C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LookInterpStep;                                    // 0x230(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FOVInterpSpeed;                                    // 0x234(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DOFInterpSpeed;                                    // 0x238(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DOFAperture;                                       // 0x23C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveSpeed;                                         // 0x240(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LookSpeed;                                         // 0x244(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VerticalSpeed;                                     // 0x248(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FOVSpeed;                                          // 0x24C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DOFSpeed;                                          // 0x250(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveMultiplier;                                    // 0x254(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LookMultiplier;                                    // 0x258(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VerticalMultiplier;                                // 0x25C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FOVMultiplier;                                     // 0x260(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DOFMultiplier;                                     // 0x264(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeDilationAmt;                                   // 0x268(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeDilationStep;                                  // 0x26C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_361[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMarketingCameraActor* GetDefaultObj();

	void UpdateUpLook(float AxisValue);
	void UpdateRightMovement(float AxisValue);
	void UpdateRightLook(float AxisValue);
	void UpdateForwardMovement(float AxisValue);
	void ToggleLookPlayer();
	void ToggleFollowPlayer();
	void ToggleFocalDistanceFollow();
	void ToggleAlternateControls();
	void SetAperture();
	void ResetTimeDefault();
	void ResetSpeedDefaults();
	void ResetRollDefault();
	void ResetPositionDefault();
	void ResetInterpolationDefaults();
	void ResetFOVDefault();
	void ResetDOFDefault();
	void ResetAllDefaults();
	void ReleaseRollRight();
	void ReleaseRollLeft();
	void ReleaseMoveUp();
	void ReleaseMoveDown();
	void ReleaseIncreaseFOV();
	void ReleaseIncreaseDOF();
	void ReleaseDecreaseFOV();
	void ReleaseDecreaseDOF();
	void PayRespect();
	void IncreaseVerticalSpeed();
	void IncreaseTimeDilation();
	void IncreaseMoveSpeed();
	void IncreaseMoveSmoothing();
	void IncreaseLookSpeed();
	void IncreaseLookSmoothing();
	void IncreaseFOVSpeed();
	void IncreaseDOFSpeed();
	void IncreaseAperture();
	void HoldRollRight();
	void HoldRollLeft();
	void HoldMoveUp();
	void HoldMoveDown();
	void HoldIncreaseFOV();
	void HoldIncreaseDOF();
	void HoldDecreaseFOV();
	void HoldDecreaseDOF();
	float GetDOF();
	void DecreaseVerticalSpeed();
	void DecreaseTimeDilation();
	void DecreaseMoveSpeed();
	void DecreaseMoveSmoothing();
	void DecreaseLookSpeed();
	void DecreaseLookSmoothing();
	void DecreaseFOVSpeed();
	void DecreaseDOFSpeed();
	void DecreaseAperture();
	void CycleLockAxis();
};

}


