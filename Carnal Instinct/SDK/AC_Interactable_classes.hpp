#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x124 (0x1D4 - 0xB0)
// BlueprintGeneratedClass AC_Interactable.AC_Interactable_C
class UAC_Interactable_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FS_ItemData>                   ItemData;                                          // 0xB8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UDataTable*>                    All_Items_from_DT;                                 // 0xC8(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_SingleDTItem>               Single_DT_Item;                                    // 0xD8(0x10)(Edit, BlueprintVisible)
	enum class E_InteractableType                Interactable_Type;                                 // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Destroy_after_Pickup_;                             // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F8B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Storage_;                                          // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Vendor_Gold;                                       // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DefaultInteractionText;                            // 0xF8(0x18)(Edit, BlueprintVisible)
	class FText                                  DefaultCharacterName;                              // 0x110(0x18)(Edit, BlueprintVisible)
	class UBoxComponent*                         Interactable_Area;                                 // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UWidgetComponent*                      Interaction_Widget;                                // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                  Interactable_Tag;                                  // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>           Objects_to_Highlight;                              // 0x140(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class FString                                Key_ID;                                            // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Remove_Item_after_Unlock;                          // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_InventoryPanels                 Specified_Panel;                                   // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSpecifiedPanel_;                                // 0x162(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsInteractable;                                    // 0x163(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Associated_Interactable_Actors;                    // 0x168(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ATargetPoint*                          Destination_Point;                                 // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Travel_Duration;                                   // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Destroyable_Tag;                                   // 0x184(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                        Timeline_Position;                                 // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         Already_Interacted;                                // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                        Pad_2FB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Max_Key_Time_Down;                                 // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mashing_Key_Retriggerable_Time;                    // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FBE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Interaction_C*                     Interaction_Widget_Ref;                            // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTimerHandle                          Key_Down_Timer;                                    // 0x1A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	enum class E_InteractionInputType            Input_Type;                                        // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_InteractionResponse             Interactable_Response;                             // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Interactable_Value;                                // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Interactable_Target_Value;                         // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Interactable_Limit_Value;                          // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Remove_Interaction_on_Completed;                   // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETimelineDirection                Timeline_Direction;                                // 0x1D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         Check_for_Interactable_Value;                      // 0x1D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_SortMethod                      Sorting_Method;                                    // 0x1D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_Interactable_C* GetDefaultObj();

	void Destroy_NPC();
	void Sort_by_Rarity(const TArray<struct FS_ItemData>& Sorted, const TArray<struct FS_ItemData>& Usable, const TArray<struct FS_ItemData>& Legendary, const TArray<struct FS_ItemData>& Epic, const TArray<struct FS_ItemData>& Superior, const TArray<struct FS_ItemData>& Consumable, const TArray<struct FS_ItemData>& Common, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FS_ItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class E_ItemRarity Temp_byte_Variable, TArray<struct FS_ItemData>& K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue);
	void Sort_by_Type(const TArray<struct FS_ItemData>& Arrows, const TArray<struct FS_ItemData>& Bows, const TArray<struct FS_ItemData>& Sorted, const TArray<struct FS_ItemData>& QItems, const TArray<struct FS_ItemData>& CrIngredients, const TArray<struct FS_ItemData>& Other, const TArray<struct FS_ItemData>& Potions, const TArray<struct FS_ItemData>& Food, const TArray<struct FS_ItemData>& Shields, const TArray<struct FS_ItemData>& Weapons, const TArray<struct FS_ItemData>& Armor, TArray<struct FS_ItemData>& Temp_struct_Variable, TArray<struct FS_ItemData>& Temp_struct_Variable_1, int32 Temp_int_Array_Index_Variable, TArray<struct FS_ItemData>& Temp_struct_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_ItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, enum class E_ItemType Temp_byte_Variable, TArray<struct FS_ItemData>& K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue);
	void Permanently_Remove_Interaction_from_Associates(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue_1);
	void Change_Interactable_Value(bool Increment, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Re_Initialize_Associated_Actors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Remove_Interaction_by_Response(bool K2Node_SwitchEnum_CmpSuccess);
	void Toggle_Interaction_Widget(bool Condition, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Fill_Interaction_Widget_Border(float Value, bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	void Toggle_IsInteractable(bool Condition, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Setup_Data(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_SingleDTItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UDataTable* CallFunc_Array_Get_Item_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_Array_Get_Item_2, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_ItemStacks& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Array_Length_ReturnValue_2, const struct FS_ItemData& K2Node_SetFieldsInStruct_StructOut_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2);
	void Interaction();
	void End_Interaction();
	void Initialize();
	void Remove_Interaction();
	void Game_Load();
	void Event_Remove_Interaction();
	void Event_Toggle_Highlight(bool Highlight);
	void Event_Interaction();
	void ReceiveBeginPlay();
	void Setup_Interactable_References(class UBoxComponent* Interactable_Area, class UWidgetComponent* Interaction_Widget, TSet<class UPrimitiveComponent*> Highlightable_Objects);
	void Event_End_Interaction();
	void Event_Associated_Actor_Interaction();
	void Event_Initialize();
	void Event_Game_Loaded();
	void Event_Associated_Actor_End_Interaction();
	void Event_Duration_Press();
	void Is_Key_Down();
	void Event_Multiple_Press();
	void Event_Pre_Interaction();
	void Event_Switch_on_Interactable_Type();
	void Event_ReMinusinitialize();
	void Event_Check_for_Interaction();
	void ExecuteUbergraph_AC_Interactable(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_CustomEvent_Highlight, class AActor* CallFunc_GetOwner_ReturnValue, float Temp_float_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBoxComponent* K2Node_CustomEvent_Interactable_Area, class UWidgetComponent* K2Node_CustomEvent_Interaction_Widget, TSet<class UPrimitiveComponent*> K2Node_CustomEvent_Highlightable_Objects, TArray<class UPrimitiveComponent*>& CallFunc_Set_ToArray_Result, class UWB_Interaction_C* CallFunc_Create_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, class AActor* CallFunc_Array_Get_Item, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_2, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_4, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_6, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_5, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_2, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_6, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, class AALS_AnimMan_CharacterBP_C* CallFunc_GetActorOfClass_ReturnValue, class UAC_Inventory_C* CallFunc_GetComponentByClass_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FKey& Temp_struct_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_7, class URPGInventory_GameInstance_C* K2Node_DynamicCast_AsRPGInventory_Game_Instance, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_Array_AddUnique_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, const struct FKey& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_10, const struct FKey& K2Node_Select_Default, float CallFunc_GetInputKeyTimeDown_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_8, class AActor* CallFunc_GetOwner_ReturnValue_9, int32 CallFunc_Array_AddUnique_ReturnValue_1, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_11, int32 CallFunc_Array_AddUnique_ReturnValue_2);
};

}


