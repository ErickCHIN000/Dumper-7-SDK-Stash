#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass msl_function_library.msl_function_library_C
class UMsl_function_library_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMsl_function_library_C* GetDefaultObj();

	void Msl_get_identifier_component(class AActor* Target_actor, class UObject* __WorldContext, bool* Is_valid, class Ubp_msl_identifier_component_C** Identifier_reference, bool CallFunc_IsValid_ReturnValue, class Ubp_msl_identifier_component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Msl_get_actor_by_id(class FName Actor_id, class UObject* __WorldContext, bool* Is_valid, class AActor** Actor_reference, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item);
	void Msl_get_savegame_reference(class UObject* __WorldContext, class Abp_msl_savegame_actor_C** Save_actor, TArray<class Abp_msl_savegame_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class Abp_msl_savegame_actor_C* CallFunc_Array_Get_Item);
	void Msl_get_localization_reference(class UObject* __WorldContext, class Abp_msl_localization_actor_C** Localization_actor, TArray<class Abp_msl_localization_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class Abp_msl_localization_actor_C* CallFunc_Array_Get_Item);
	void Msl_get_settings_reference(class UObject* __WorldContext, class Abp_msl_settings_actor_C** Settings_actor, class APlayerController* Local_controller, TArray<class Abp_msl_settings_actor_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class Abp_msl_settings_actor_C* CallFunc_Array_Get_Item);
};

}


