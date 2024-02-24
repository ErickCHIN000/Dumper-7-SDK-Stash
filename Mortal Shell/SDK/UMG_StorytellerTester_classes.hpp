#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x264 - 0x230)
// WidgetBlueprintGeneratedClass UMG_StorytellerTester.UMG_StorytellerTester_C
class UUMG_StorytellerTester_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               FinishNowButton;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               StorytellerTestButton;                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_Storyteller_C*                     StorytellerObject;                                 // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDialogTrees>                  DialogArray;                                       // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        TestIterator;                                      // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_StorytellerTester_C* GetDefaultObj();

	void BndEvt__StorytellerTestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void GiveControlToPlayer();
	void BndEvt__FinishNowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void StartStory();
	void ExecuteUbergraph_UMG_StorytellerTester(int32 EntryPoint, TArray<class ABP_Storyteller_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Storyteller_C* CallFunc_Array_Get_Item, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FDialogTrees& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


