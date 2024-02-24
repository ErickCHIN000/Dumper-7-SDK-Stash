#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26 (0x708 - 0x6E2)
// BlueprintGeneratedClass BP_AoePayload_Dispellable.BP_AoePayload_Dispellable_C
class ABP_AoePayload_Dispellable_C : public ABP_AoePayloadBase_C
{
public:
	uint8                                        Pad_6DD0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_0_ColorAlpha_FB719486483B509E29F5F6BA4C5DFF90; // 0x6F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_FB719486483B509E29F5F6BA4C5DFF90; // 0x6F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x6F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Time_Override;                                     // 0x700(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AoePayload_Dispellable_C* GetDefaultObj();

	void HandleFadeOut(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
	void HandleTagChange(struct FGameplayTag& Tag, int32 Count, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void TempDispelFX();
	void ExecuteUbergraph_BP_AoePayload_Dispellable(int32 EntryPoint, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

}


