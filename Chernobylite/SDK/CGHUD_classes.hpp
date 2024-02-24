#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x338 - 0x310)
// BlueprintGeneratedClass CGHUD.CGHUD_C
class ACGHUD_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWid_HudFlashlightIndicator_C*         FlashlightIndicator;                               // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_HudVignette                  VignetteType;                                      // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_578[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_OnScreen_Inventory_HP_C*          InventoryHP;                                       // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACGHUD_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
	void ShowGasmaskFilterIcon(bool Empty);
	void HealthChangedDelegateEvent(float OldHealth, float NewHealth, enum class EHealthPhase Phase, TSubclassOf<class UDamageType> InDamageClass);
	void RadiationPhaseChangedDelegateEvent(enum class EHealthPhase OldPhase, enum class EHealthPhase NewPhase);
	void ExecuteUbergraph_CGHUD(int32 EntryPoint, TArray<class UWid_OnScreen_Inventory_HP_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UWid_OnScreen_Inventory_HP_C* CallFunc_Array_Get_Item, class UWid_WaterMark_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_HudFlashlightIndicator_C* CallFunc_Create_ReturnValue_1, int32 K2Node_Event_SizeX, int32 K2Node_Event_SizeY, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Empty, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float K2Node_CustomEvent_OldHealth, float K2Node_CustomEvent_NewHealth, enum class EHealthPhase K2Node_CustomEvent_Phase, TSubclassOf<class UDamageType> K2Node_CustomEvent_InDamageClass, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float CallFunc_GetMaxHP_ReturnValue, float CallFunc_GetCurrentHP_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, enum class EHealthPhase K2Node_CustomEvent_OldPhase, enum class EHealthPhase K2Node_CustomEvent_NewPhase, bool CallFunc_Less_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWid_OnScreen_Inventory_HP_C* CallFunc_Create_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class UWid_HudFlashlightIndicator_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWid_HudFlashlightIndicator_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


