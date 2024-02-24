#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C
class UWid_CompanionEquipmentBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            CompanionNameBlock;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_CompanionEquipment_ItemBox_C*     ItemBox_Armor;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_CompanionEquipment_ItemBox_C*     ItemBox_Wepaon;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_CompanionEquipment_Stats_C*       Wid_CompanionEquipment_Stats;                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_CompanionEquipmentBox_C* GetDefaultObj();

	void GetSelected(class UWid_CompanionEquipment_ItemBox_C** ItemBox, bool Temp_bool_Variable, class UWid_CompanionEquipment_ItemBox_C* Temp_object_Variable, class UWid_CompanionEquipment_ItemBox_C* K2Node_Select_Default);
	void Select_Next(int32 FirstIndex, class UWid_CompanionEquipment_ItemBox_C* NewToSelect, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 Temp_int_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UWid_CompanionEquipment_ItemBox_C* K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, class UWid_CompanionEquipment_ItemBox_C* K2Node_Select_Default_1, class UWid_CompanionEquipment_ItemBox_C* K2Node_Select_Default_2);
	void Select(enum class ECompanionEquipmentSlotType Type, enum class ECompanionEquipmentSlotType Temp_byte_Variable, class UWid_CompanionEquipment_ItemBox_C* K2Node_Select_Default);
	void UnselectAll();
	void PreConstruct(bool IsDesignTime);
	void Init(class FName CompanionID);
	void ExecuteUbergraph_wid_CompanionEquipmentBox(int32 EntryPoint, class FName K2Node_CustomEvent_CompanionID, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FActorInfo& CallFunc_K2_GetActorInfo_Info, bool CallFunc_K2_GetActorInfo_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}


