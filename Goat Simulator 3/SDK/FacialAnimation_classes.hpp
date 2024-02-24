#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x8B0 - 0x870)
// Class FacialAnimation.AudioCurveSourceComponent
class UAudioCurveSourceComponent : public UAudioComponent
{
public:
	uint8                                        Pad_35A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurveSourceBindingName;                            // 0x878(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveSyncOffset;                                   // 0x880(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35D[0x2C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioCurveSourceComponent* GetDefaultObj();

};

}


