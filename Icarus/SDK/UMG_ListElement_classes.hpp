#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2E8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ListElement.UMG_ListElement_C
class UUMG_ListElement_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Selected;                                          // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4598[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProcessorRecipesRowHandle            ProcessorRecipe;                                   // 0x26C(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_45A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_RecipeToolTip_C*                  RecipeToolTip;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LinkedActor;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_ButtonState                     ButtonState;                                       // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Valid;                                             // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AlwaysValid;                                       // 0x29A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         MouseInteraction;                                  // 0x29B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_45C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            RecipeSelected;                                    // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseInput;                                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_45D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSessionFlagsRowHandle                HighlightFlag;                                     // 0x2B4(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_45DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_WidgetHighlightBase_C*            QuestHelper;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTagQueriesRowHandle>          CachedQueries;                                     // 0x2D8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_ListElement_C* GetDefaultObj();

	void FullUpdate(bool CallFunc_IsValid_ReturnValue);
	class UOverlay* GetOverlay();
	void UpdateTrigger(bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	void UpdateVisibility(struct FTagQueriesRowHandle& ItemQuery, bool CallFunc_EqualEqual_FTagQueriesRowHandleFTagQueriesRowHandle_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void SetState(bool Valid);
	void Initialise();
	void InitialiseIcons();
	class UUMG_RecipeElementImage_C* CreateResourceWidget(struct FResourceItem& ResourceItem, class UUMG_RecipeElementImage_C* CallFunc_Create_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceImage_ReturnValue);
	void CreateOutputItem(struct FItemData& CraftingOutput, class FText* Name, TSoftObjectPtr<class UTexture2D>* Icon, class FText CallFunc_GetItemName_Name, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon);
	void CreateInputItem(struct FItemData& CraftingInput, class FText* Name, TSoftObjectPtr<class UTexture2D>* Icon, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, class FText CallFunc_GetItemName_Name);
	void InitialiseToolTip(class UUMG_RecipeToolTip_C* CallFunc_Create_ReturnValue, const struct FProcessingItem& K2Node_MakeStruct_ProcessingItem, bool CallFunc_IsRowHandleValid_ReturnValue);
	class UOverlay* GetHoverCornerWidget();
	class UTexture2D* GetResourceImage(enum class EIcarusResourceType Type, class UTexture2D* RecipeIcon, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default);
	TArray<struct FResourceItem> GetResourceOutputs(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, TArray<struct FResourceItem>& CallFunc_CreateRecipeOutputResourceData_ReturnValue);
	TArray<struct FResourceItem> GetResourceInputs(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, TArray<struct FResourceItem>& CallFunc_CreateRecipeInputResourceData_ReturnValue);
	TArray<struct FItemData> GetProcessorOutputs(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, TArray<struct FItemData>& CallFunc_CreateRecipeOutputItemData_ReturnValue);
	TArray<struct FItemData> GetProcessorInputs(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, TArray<struct FItemData>& CallFunc_CreateRecipeInputItemData_ReturnValue);
	struct FProcessorRecipesRowHandle GetProcessorRecipe();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_UMG_ListElement(int32 EntryPoint, class UOverlay* CallFunc_GetOverlay_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class UOverlay* CallFunc_GetHoverCornerWidget_ReturnValue, class UOverlay* CallFunc_GetHoverCornerWidget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RecipeSelected__DelegateSignature(const struct FProcessorRecipesRowHandle& Recipe);
};

}


