#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass Audio_NotifyState_Base.Audio_NotifyState_Base_C
class UAudio_NotifyState_Base_C : public UAnimNotifyState
{
public:
	float                                        VolumeMultiplier;                                  // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchMultiplier;                                   // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            EditorOnlyPreviewSound;                            // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAudio_NotifyState_Base_C* GetDefaultObj();

};

}


