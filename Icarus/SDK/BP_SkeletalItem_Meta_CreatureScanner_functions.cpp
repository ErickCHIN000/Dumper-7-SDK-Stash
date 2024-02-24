#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C
// (Actor)

class UClass* ABP_SkeletalItem_Meta_CreatureScanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Meta_CreatureScanner_C");

	return Clss;
}


// BP_SkeletalItem_Meta_CreatureScanner_C BP_SkeletalItem_Meta_CreatureScanner.Default__BP_SkeletalItem_Meta_CreatureScanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Meta_CreatureScanner_C* ABP_SkeletalItem_Meta_CreatureScanner_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Meta_CreatureScanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Meta_CreatureScanner_C*>(ABP_SkeletalItem_Meta_CreatureScanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.OnRep_Scanning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_CreatureScanner_C*        K2Node_DynamicCast_AsW_Creature_Scanner                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Meta_CreatureScanner_C::OnRep_Scanning(class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_CreatureScanner_C* K2Node_DynamicCast_AsW_Creature_Scanner, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_CreatureScanner_C", "OnRep_Scanning");

	Params::ABP_SkeletalItem_Meta_CreatureScanner_C_OnRep_Scanning_Params Parms{};

	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Creature_Scanner = K2Node_DynamicCast_AsW_Creature_Scanner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.OnRep_AI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_CreatureScanner_C*        K2Node_DynamicCast_AsW_Creature_Scanner                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Meta_CreatureScanner_C::OnRep_AI(class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_CreatureScanner_C* K2Node_DynamicCast_AsW_Creature_Scanner, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_CreatureScanner_C", "OnRep_AI");

	Params::ABP_SkeletalItem_Meta_CreatureScanner_C_OnRep_AI_Params Parms{};

	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Creature_Scanner = K2Node_DynamicCast_AsW_Creature_Scanner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.Play Fish Finder Finish Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Meta_CreatureScanner_C::Play_Fish_Finder_Finish_Sound(enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_CreatureScanner_C", "Play Fish Finder Finish Sound");

	Params::ABP_SkeletalItem_Meta_CreatureScanner_C_Play_Fish_Finder_Finish_Sound_Params Parms{};

	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.Play Sonar Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Meta_CreatureScanner_C::Play_Sonar_Sound(enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_CreatureScanner_C", "Play Sonar Sound");

	Params::ABP_SkeletalItem_Meta_CreatureScanner_C_Play_Sonar_Sound_Params Parms{};

	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.GetScreenWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidgetComponent* ABP_SkeletalItem_Meta_CreatureScanner_C::GetScreenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_CreatureScanner_C", "GetScreenWidget");

	Params::ABP_SkeletalItem_Meta_CreatureScanner_C_GetScreenWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.GenericAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Meta_CreatureScanner_C::GenericAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_CreatureScanner_C", "GenericAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Meta_CreatureScanner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_CreatureScanner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.GenericActionWithCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Meta_CreatureScanner_C::GenericActionWithCharacter(class AIcarusPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_CreatureScanner_C", "GenericActionWithCharacter");

	Params::ABP_SkeletalItem_Meta_CreatureScanner_C_GenericActionWithCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Meta_CreatureScanner.BP_SkeletalItem_Meta_CreatureScanner_C.ExecuteUbergraph_BP_SkeletalItem_Meta_CreatureScanner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagQuery           CallFunc_MakeGameplayTagQuery_ReturnValue                        (None)
// struct FAISetupRowHandle           Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FAISetup                    CallFunc_GetAISetupStruct_AISetup                                (None)
// enum class EValid                  CallFunc_GetAISetupStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_CreatureScanner_C*        K2Node_DynamicCast_AsW_Creature_Scanner                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_IcarusNPCGOAPCharacter_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISpawnableAI>K2Node_DynamicCast_AsSpawnable_AI                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAISetupRowHandle           CallFunc_GetAISetupRowHandle_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct FBestiaryPointsRowHandle    CallFunc_MakeLiteralBestiaryPoints_ReturnValue                   (NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Meta_CreatureScanner_C::ExecuteUbergraph_BP_SkeletalItem_Meta_CreatureScanner(int32 EntryPoint, const struct FGameplayTagQuery& CallFunc_MakeGameplayTagQuery_ReturnValue, const struct FAISetupRowHandle& Temp_struct_Variable, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_CreatureScanner_C* K2Node_DynamicCast_AsW_Creature_Scanner, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerCharacter* K2Node_Event_Character, TArray<class ABP_IcarusNPCGOAPCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess_1, const struct FAISetupRowHandle& CallFunc_GetAISetupRowHandle_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FBestiaryPointsRowHandle& CallFunc_MakeLiteralBestiaryPoints_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Meta_CreatureScanner_C", "ExecuteUbergraph_BP_SkeletalItem_Meta_CreatureScanner");

	Params::ABP_SkeletalItem_Meta_CreatureScanner_C_ExecuteUbergraph_BP_SkeletalItem_Meta_CreatureScanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeGameplayTagQuery_ReturnValue = CallFunc_MakeGameplayTagQuery_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetAISetupStruct_AISetup = CallFunc_GetAISetupStruct_AISetup;
	Parms.CallFunc_GetAISetupStruct_Paths = CallFunc_GetAISetupStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Creature_Scanner = K2Node_DynamicCast_AsW_Creature_Scanner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpawnable_AI = K2Node_DynamicCast_AsSpawnable_AI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAISetupRowHandle_ReturnValue = CallFunc_GetAISetupRowHandle_ReturnValue;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_MakeLiteralBestiaryPoints_ReturnValue = CallFunc_MakeLiteralBestiaryPoints_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


