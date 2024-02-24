#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x498 - 0x470)
// BlueprintGeneratedClass ba_aa_pdaInv_01.ba_aa_pdaInv_01_C
class Aba_aa_pdaInv_01_C : public ACGActiveItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       Scene;                                             // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWidgetComponent*                      Screen;                                            // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x490(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_aa_pdaInv_01_C* GetDefaultObj();

	void GetWidget(class UWid_Pda_C** Wid_Pda, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_Pda_C* K2Node_DynamicCast_AsWid_Pda, bool K2Node_DynamicCast_bSuccess);
	void ReceiveTick(float DeltaSeconds);
	void AlternativeActivateItem();
	void ActivateItem();
	void OnHideShowAdditional(enum class EState OutTargetState);
	void ExecuteUbergraph_ba_aa_pdaInv_01(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UWid_Pda_C* CallFunc_GetWidget_Wid_Pda, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float K2Node_Event_DeltaSeconds, enum class EState K2Node_Event_OutTargetState, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool K2Node_SwitchEnum_CmpSuccess, class UWid_pda_MainView_C* K2Node_DynamicCast_AsWid_Pda_Main_View, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool CallFunc_AddToPlayerScreen_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery, bool CallFunc_QueryActivity_OutQueryResult, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue);
};

}


