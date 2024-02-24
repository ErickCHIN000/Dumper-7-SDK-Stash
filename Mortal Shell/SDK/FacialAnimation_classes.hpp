#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x810 - 0x7D0)
// Class FacialAnimation.AudioCurveSourceComponent
class UAudioCurveSourceComponent : public UAudioComponent
{
public:
	uint8                                        Pad_17E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurveSourceBindingName;                            // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveSyncOffset;                                   // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180[0x2C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioCurveSourceComponent* GetDefaultObj();

};

}


