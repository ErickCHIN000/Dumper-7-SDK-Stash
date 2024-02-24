#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC4 (0x324 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ArmourPaperdoll.UMG_ArmourPaperdoll_C
class UUMG_ArmourPaperdoll_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              MainOverlay;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ArmourHealth_C*                   UMG_ArmourHealth_ArmL;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ArmourHealth_C*                   UMG_ArmourHealth_ArmR;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ArmourHealth_C*                   UMG_ArmourHealth_Chest;                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ArmourHealth_C*                   UMG_ArmourHealth_Feet;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ArmourHealth_C*                   UMG_ArmourHealth_Helmet;                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ArmourHealth_C*                   UMG_ArmourHealth_Legs;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_ArmourHealth                    EArmourHealth;                                     // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           HealthyOpacity;                                    // 0x2A8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           DamagedOpacity;                                    // 0x2D0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           BrokenOpacity;                                     // 0x2F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        DamgedArmourThreshold;                             // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ArmourPaperdoll_C* GetDefaultObj();

	void UpdateElement(int32 Slot, float Durability, bool K2Node_SwitchInteger_CmpSuccess);
	void SetPaperdollStyle(class UInventory* EquipmentInventory, bool Show, const struct FSlateColor& Two0_, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FDurableData& CallFunc_GetDurableData_DurableData, enum class EDataValid CallFunc_GetDurableData_Paths, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UMG_ArmourPaperdoll(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


