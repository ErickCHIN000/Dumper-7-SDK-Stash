#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x348 - 0x310)
// BlueprintGeneratedClass BP_EquipmentMenuPawn_Shells.BP_EquipmentMenuPawn_Shells_C
class ABP_EquipmentMenuPawn_Shells_C : public ABP_EquipmentMenuPawn_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Camera_Target;                                     // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Camera_Current;                                    // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        XPos_1;                                            // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        XPos_2;                                            // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_587[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MousePosition;                                     // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   GameInfoInstance;                                  // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EquipmentMenuPawn_Shells_C* GetDefaultObj();

	void ShowSelf(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_EquipmentMenuShellDisplay_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HideSelf(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_EquipmentMenuShellDisplay_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	float CameraClamp(float Value, bool CallFunc_IsHadernContentEnabled_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void GetGameInstanceRef(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void UpdateCamera_Mouse(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_CameraClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_CameraClamp_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess);
	void ResetShells(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_EquipmentMenuShellDisplay_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ResetCamera(const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void SetSelfReference(bool CallFunc_IsValid_ReturnValue);
	void SetShellsMaterialAndWeapon(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_EquipmentMenuShellDisplay_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void GetGameStateRef();
	void UpdateCameraTarget(int32 Index, bool Instant, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float K2Node_Select_Default, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void UpdateCamera_GamepadAndKeyboard(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_FInterpTo_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void Event_CustomPossess();
	void Event_CustomUnpossess();
	void ExecuteUbergraph_BP_EquipmentMenuPawn_Shells(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds);
};

}


