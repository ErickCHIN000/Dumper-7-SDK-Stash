#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2E8 - 0x260)
// WidgetBlueprintGeneratedClass wid_BuildSystem_EntityList.wid_BuildSystem_EntityList_C
class UWid_BuildSystem_EntityList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_ButtonIndicator_C*                ButtonIndicatorLeft;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                ButtonIndicatorRight;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ButtonL;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ButtonR;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Category;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DownArrow;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageL;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageR;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TabContainer;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UpArrow;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentSelected;                                   // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A32[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MovementEnded;                                     // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_Crafting_Main_C*                  CraftingParent;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_Upgrades_Main_C*                  UpgradeParent;                                     // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_BuildSystem_EntityList_C* GetDefaultObj();

	void UpdateCategory(class FName RowName, class FText Temp_text_Variable, bool Temp_bool_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FSt_RecipeCategory& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText K2Node_Select_Default);
	void ShowArrow(bool Up, bool Down, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1);
	void GetTab(int32 Index, class UWid_BuildSystem_EntityList_Entry_C** Tab, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_BuildSystem_EntityList_Entry_C* K2Node_DynamicCast_AsWid_Build_System_Entity_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void ClearToDefault(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWid_BuildSystem_EntityList_Entry_C* K2Node_DynamicCast_AsWid_Build_System_Entity_List_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateTab(class FName ID, class FName UID, int32 Index, bool IsOwned, int32 CurrentCount, class UTexture2D* Img, class FText CustomText, const struct FVector2D& Position, const struct FInventoryEntry& Entry, bool Disabled, bool GreyOut, class FName SockedName, const struct FVector& SocketOffset, const struct FRotator& SocketRotationOffset, enum class EUpgradeType UpgradeType, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWid_BuildSystem_EntityList_Entry_C* K2Node_DynamicCast_AsWid_Build_System_Entity_List_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void Clear();
	void MoveLeft(int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
	void MoveRight(int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
	void SetArrowsVisibility(bool Up, bool Down);
	void SelectTab(int32 Index, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWid_BuildSystem_EntityList_Entry_C* K2Node_DynamicCast_AsWid_Build_System_Entity_List_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_BuildSystem_EntityList_Entry_C* K2Node_DynamicCast_AsWid_Build_System_Entity_List_Entry_1, bool K2Node_DynamicCast_bSuccess_1);
	void CreateTab(class FName ItemId, class FName UniqueId, bool IsOwned, int32 CurrentCount, int32 Elements, class UTexture2D* Img, class FText CustomText, const struct FInventoryEntry& Icons, class UWid_BuildSystem_EntityList_Entry_C* NewTab, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_BuildSystem_EntityList_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void MoveTab(bool MovingToTheRight, bool IsBlocked);
	void BndEvt__ButtonL_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonR_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ButtonL_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonL_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonR_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonR_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_wid_BuildSystem_EntityList(int32 EntryPoint, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* Temp_class_Variable_2, class UClass* Temp_class_Variable_3, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_MovingToTheRight, bool K2Node_CustomEvent_IsBlocked, class UClass* K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool Temp_bool_Variable_2, class UClass* K2Node_Select_Default_1, class UClass* K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetTime_Time, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
	void MovementEnded__DelegateSignature();
};

}


