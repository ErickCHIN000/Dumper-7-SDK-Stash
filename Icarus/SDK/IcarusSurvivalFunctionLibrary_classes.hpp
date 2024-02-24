#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IcarusSurvivalFunctionLibrary.IcarusSurvivalFunctionLibrary_C
class UIcarusSurvivalFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UIcarusSurvivalFunctionLibrary_C* GetDefaultObj();

	void GetBestSafeTeleportLocationForPlayer(class AIcarusPlayerCharacter* PlayerCharacter, class UObject* __WorldContext, struct FVector* OutLocation, TSoftClassPtr<class AActor> DropShipSpawnerClass, TSoftClassPtr<class AActor> RespawnPodSpawnerClass, class AActor* SelectedSpawnActor, const struct FVector& TeleportOffset, const struct FVector& TeleportLocation, const struct FVector& PlayerLocation, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* Temp_wildcard_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_ObjectToText_ReturnValue_1, class FText CallFunc_Conv_ObjectToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, class UClass* K2Node_ClassDynamicCast_AsActor_1, bool K2Node_ClassDynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Vector_Distance2DSquared_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_SampleLocationOutOfBounds_ReturnValue, bool CallFunc_SampleLocationOutOfBounds_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Vector_Distance2DSquared_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualExactly_VectorVector_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue);
	class ABP_IcarusPlayerControllerSurvival_C* GetIcarusPlayerControllerSurvivalBP(int32 PlayerIndex, class UObject* __WorldContext, bool* Valid, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	class ABP_IcarusPlayerCharacterSurvival_C* GetIcarusPlayerCharacterSurvivalBP(int32 PlayerIndex, class UObject* __WorldContext, bool* Valid, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess);
};

}


