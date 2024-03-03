#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x120 - 0xB0)
// BlueprintGeneratedClass bp_msl_system_component.bp_msl_system_component_C
class Ubp_msl_system_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         Is_system_loaded;                                  // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_msl_settings_actor_C*              Settings_actor;                                    // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_msl_savegame_actor_C*              Savegame_actor;                                    // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_msl_localization_actor_C*          Localization_actor;                                // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Ed_device_changed;                                 // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ed_settings_updated;                               // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class Abp_dlg_control_C*                     Dlg_controls;                                      // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_01_dlg_2d_layout_C*                 W_dlg_layout;                                      // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_01_map_layout_C*                    W_map_layout;                                      // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_01_quest_layout_C*                  W_quest_layout;                                    // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_01_quest_layout_C*                  W_01_Quest_Layout;                                 // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubp_msl_system_component_C* GetDefaultObj();

	void Init_dlg(const struct FTransform& Local_transform, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWB_InGame_C* CallFunc_Array_Get_Item, class UW_01_dlg_2d_layout_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_dlg_control_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class Abp_dlg_control_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Init_spawn(const struct FTransform& Local_transform, TArray<class Abp_msl_settings_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class Abp_msl_settings_actor_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class Abp_msl_savegame_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class Abp_msl_savegame_actor_C* CallFunc_FinishSpawningActor_ReturnValue_1, TArray<class Abp_msl_localization_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, class Abp_msl_localization_actor_C* CallFunc_FinishSpawningActor_ReturnValue_2);
	void ReceiveBeginPlay();
	void Init_system();
	void ExecuteUbergraph_bp_msl_system_component(int32 EntryPoint);
	void Ed_settings_updated__DelegateSignature(class FName Settings_name, int32 Settings_value, float Slider_value, bool Is_slider, bool Is_apply);
	void Ed_device_changed__DelegateSignature(bool Is_gamepad);
};

}


