#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x461 - 0x3E8)
// BlueprintGeneratedClass BP_CharacterCreation_ProxyChar_Child_Ancestry.BP_CharacterCreation_ProxyChar_Child_Ancestry_C
class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C : public ABP_CharacterCreation_ProxyChar_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterAppearanceComponent_C*    BP_CharacterAppearanceComponent;                   // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Appearance_Preset_Row;                             // 0x400(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	double                                       Age_Value;                                         // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Hair_Color_Override;                               // 0x418(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FPlayerLoadoutDataReference           New_Loadout_Handle;                                // 0x428(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AncesrySelect;                                     // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Test_ShowPlayBreaker;                              // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CharacterCreation_ProxyChar_Child_Ancestry_C* GetDefaultObj();

	void RND_AnimationBreakerTest(double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1);
	void ReceiveBeginPlay();
	void SetActiveFamilyMember(int32 Index);
	void ExecuteUbergraph_BP_CharacterCreation_ProxyChar_Child_Ancestry(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 K2Node_CustomEvent_index, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void AncesrySelect__DelegateSignature(int32 ActiveIndex);
};

}


