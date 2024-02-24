#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass wid_PlayerMiniStorageResources.wid_PlayerMiniStorageResources_C
class UWid_PlayerMiniStorageResources_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                          ResourcesBox;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ResourcesBoxHorizontal;                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ResourcesBoxHorizontal2;                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, int32>                     Ingredients;                                       // 0x290(0x50)(Edit, BlueprintVisible)
	class UInventoryComponent2*                  Inventory;                                         // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowYourResources;                                 // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseHorizontalBox;                                  // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowStorageItems;                                  // 0x2EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HorizontalBoxMaxItems;                             // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Grid_Entry_C*           CurrentSelection;                                  // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Storage_Main_C*                   Parent;                                            // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_ResourceTransfer_C*               RMBMenu;                                           // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_PlayerMiniStorageResources_C* GetDefaultObj();

	void GetAt(const struct FVector2D& Index, class UWid_Inventory_Grid_Entry_C** OutputPin, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_Inventory_Grid_Entry_C* K2Node_DynamicCast_AsWid_Inventory_Grid_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void SelectAt(const struct FVector2D& Idx, class UWid_Inventory_Grid_Entry_C* CallFunc_GetAt_OutputPin, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	enum class ESlateVisibility Get_ResourcesBox_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetCost(TMap<enum class Enum_ItemNames, int32> Cost, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class Enum_ItemNames>& CallFunc_Map_Keys_Keys, enum class Enum_ItemNames CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Update(bool IgnoreSelect);
	void Event_Right();
	void EventLeft();
	void Construct();
	void OpenMenu(class FName NameID);
	void CloseMenu();
	void ExecuteUbergraph_wid_PlayerMiniStorageResources(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, class UWid_ResourceTransfer_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_CustomEvent_IgnoreSelect, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWid_Inventory_Grid_Entry_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, const struct FVector2D& Temp_struct_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, class UPanelWidget* K2Node_Select_Default, TArray<enum class EResourceType>& K2Node_MakeArray_Array, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, enum class EResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_GetNameByResource_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Count_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, class FName K2Node_CustomEvent_NameID, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, enum class EResourceType CallFunc_MapEnumItemNamesToEResourceType_Value, bool CallFunc_MapEnumItemNamesToEResourceType_Found, float CallFunc_Count_ReturnValue_1, enum class EResourceType CallFunc_MapEnumItemNamesToEResourceType_Value_1, bool CallFunc_MapEnumItemNamesToEResourceType_Found_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Count_ReturnValue_2, float CallFunc_FMin_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Count_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}


