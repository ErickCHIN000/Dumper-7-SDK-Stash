#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x488 - 0x470)
// BlueprintGeneratedClass ba_aa_Intermediary_ActiveItem.ba_aa_Intermediary_ActiveItem_C
class Aba_aa_Intermediary_ActiveItem_C : public ACGActiveItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                Itemtooltip;                                       // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_aa_Intermediary_ActiveItem_C* GetDefaultObj();

	void OnHideShowAdditional(enum class EState OutTargetState);
	void ExecuteUbergraph_ba_aa_Intermediary_ActiveItem(int32 EntryPoint, enum class EState K2Node_Event_OutTargetState, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


