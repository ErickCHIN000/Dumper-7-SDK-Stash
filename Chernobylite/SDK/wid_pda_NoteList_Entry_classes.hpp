#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x131 (0x391 - 0x260)
// WidgetBlueprintGeneratedClass wid_pda_NoteList_Entry.wid_pda_NoteList_Entry_C
class UWid_pda_NoteList_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               Button_35;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DropDownArrow_1;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_182;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_288;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        InfoBox_1;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Title_1;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsShownOnMap;                                      // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_253C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x2B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Disabled;                                          // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2553[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_MinimapTag_C*                      AssociatedTag;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCurrent;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2561[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TextLong;                                          // 0x2E0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            Img;                                               // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<class FName, int32>                     Ingredients;                                       // 0x300(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FBuildStatEntry>               BuildStats;                                        // 0x350(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  ItemId;                                            // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  Category;                                          // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EUpgradeType                      UpgradeType;                                       // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2586[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_pda_NoteList_Entry_C*             Parent;                                            // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsExpanded;                                        // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Grayout;                                           // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2598[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_pda_NotesList_C*                  Owner;                                             // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsFieldBuilding;                                   // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_pda_NoteList_Entry_C* GetDefaultObj();

	void Unselect();
	void Select(bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool CallFunc_NotEqual_NameName_ReturnValue, class UTexture2D* K2Node_Select_Default);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateVisibility();
	void Update();
	void BndEvt__Button_35_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_35_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_wid_pda_NoteList_Entry(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, enum class EHorizontalAlignment Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, bool Temp_bool_Variable_5, float Temp_float_Variable, float Temp_float_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, int32 CallFunc_PostEvent_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UTexture2D* K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1, bool K2Node_Event_IsDesignTime, bool CallFunc_NotEqual_NameName_ReturnValue_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Select_Default_4, bool CallFunc_BooleanAND_ReturnValue, enum class EHorizontalAlignment K2Node_Select_Default_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_PostEvent_ReturnValue_1);
};

}


