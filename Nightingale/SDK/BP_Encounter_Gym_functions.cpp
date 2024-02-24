#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_Gym.BP_Encounter_Gym_C
// (Actor)

class UClass* ABP_Encounter_Gym_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_Gym_C");

	return Clss;
}


// BP_Encounter_Gym_C BP_Encounter_Gym.Default__BP_Encounter_Gym_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_Gym_C* ABP_Encounter_Gym_C::GetDefaultObj()
{
	static class ABP_Encounter_Gym_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_Gym_C*>(ABP_Encounter_Gym_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.LoadPlugPartition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlugAssetPartition*         CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlugCollectionAsset*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Load_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_Gym_C::LoadPlugPartition(int32 Temp_int_Array_Index_Variable, class UPlugAssetPartition* CallFunc_SpawnObject_ReturnValue, class UPlugCollectionAsset* CallFunc_Array_Get_Item, bool CallFunc_Load_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "LoadPlugPartition");

	Params::ABP_Encounter_Gym_C_LoadPlugPartition_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Load_ReturnValue = CallFunc_Load_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.AreEncounterAssetsLoaded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AssetsLoaded                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_Gym_C::AreEncounterAssetsLoaded(bool* AssetsLoaded, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "AreEncounterAssetsLoaded");

	Params::ABP_Encounter_Gym_C_AreEncounterAssetsLoaded_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AssetsLoaded != nullptr)
		*AssetsLoaded = Parms.AssetsLoaded;

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.OnPlugLevelSteamed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStreamingLevelProxyActor*   StreamedProxy                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AEncounterConfig*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class AEncounterConfig*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterDataAsset*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_Gym_C::OnPlugLevelSteamed(class AStreamingLevelProxyActor* StreamedProxy, TArray<class AEncounterConfig*>& CallFunc_GetAllActorsOfClass_OutActors, class AEncounterConfig* CallFunc_Array_Get_Item, class UEncounterDataAsset* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "OnPlugLevelSteamed");

	Params::ABP_Encounter_Gym_C_OnPlugLevelSteamed_Params Parms{};

	Parms.StreamedProxy = StreamedProxy;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.SpawnEncounter_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PlugName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPOIPlugStreamingLevelDefinitionPlugDefinition                                                   (Edit, BlueprintVisible)
// struct FSoftLevelPath              LevelPath                                                        (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CopyPlugFromPartition_bFound                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPOIPlugStreamingLevelDefinitionCallFunc_CopyPlugFromPartition_ReturnValue                       (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UEncounterDataAsset*         CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPOIStreamingLevelDefinitionK2Node_MakeStruct_POIStreamingLevelDefinition                    (None)
// class AStreamingLevelProxyActor*   CallFunc_SpawnStreamingLevelFromPath_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_Gym_C::SpawnEncounter_Internal(class FName PlugName, const struct FPOIPlugStreamingLevelDefinition& PlugDefinition, const struct FSoftLevelPath& LevelPath, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CopyPlugFromPartition_bFound, const struct FPOIPlugStreamingLevelDefinition& CallFunc_CopyPlugFromPartition_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UEncounterDataAsset* CallFunc_Array_Get_Item, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FPOIStreamingLevelDefinition& K2Node_MakeStruct_POIStreamingLevelDefinition, class AStreamingLevelProxyActor* CallFunc_SpawnStreamingLevelFromPath_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "SpawnEncounter_Internal");

	Params::ABP_Encounter_Gym_C_SpawnEncounter_Internal_Params Parms{};

	Parms.PlugName = PlugName;
	Parms.PlugDefinition = PlugDefinition;
	Parms.LevelPath = LevelPath;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CopyPlugFromPartition_bFound = CallFunc_CopyPlugFromPartition_bFound;
	Parms.CallFunc_CopyPlugFromPartition_ReturnValue = CallFunc_CopyPlugFromPartition_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_MakeStruct_POIStreamingLevelDefinition = K2Node_MakeStruct_POIStreamingLevelDefinition;
	Parms.CallFunc_SpawnStreamingLevelFromPath_ReturnValue = CallFunc_SpawnStreamingLevelFromPath_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.OnRep_EncounterDataAssets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_AreEncounterAssetsLoaded_AssetsLoaded                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABP_Encounter_Gym_C::OnRep_EncounterDataAssets(bool CallFunc_AreEncounterAssetsLoaded_AssetsLoaded, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "OnRep_EncounterDataAssets");

	Params::ABP_Encounter_Gym_C_OnRep_EncounterDataAssets_Params Parms{};

	Parms.CallFunc_AreEncounterAssetsLoaded_AssetsLoaded = CallFunc_AreEncounterAssetsLoaded_AssetsLoaded;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Encounter_Gym_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.OnManagersReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_Gym_C::OnManagersReady(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "OnManagersReady");

	Params::ABP_Encounter_Gym_C_OnManagersReady_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.OnEncounterDataAssetsLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_Gym_C::OnEncounterDataAssetsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "OnEncounterDataAssetsLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.ClearEncounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_Gym_C::ClearEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "ClearEncounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.SpawnEncounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EncounterIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PlugName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_Gym_C::SpawnEncounter(int32 EncounterIndex, class FName PlugName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "SpawnEncounter");

	Params::ABP_Encounter_Gym_C_SpawnEncounter_Params Parms{};

	Parms.EncounterIndex = EncounterIndex;
	Parms.PlugName = PlugName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.ExecuteUbergraph_BP_Encounter_Gym
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UEncounterDataAsset*> CallFunc_GetEncounterDataAssets_DataAssets                       (ReferenceParm)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            K2Node_DynamicCast_AsNWXGame_Mode_Base_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SimulationStateManager_C*CallFunc_GetManager_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterManagerInterface>K2Node_DynamicCast_AsEncounter_Manager_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_EncounterIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_PlugName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetLoadedLevelInstanceName_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_Gym_C::ExecuteUbergraph_BP_Encounter_Gym(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TArray<class UEncounterDataAsset*>& CallFunc_GetEncounterDataAssets_DataAssets, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class IInterface> Temp_class_Variable, bool K2Node_CustomEvent_Success, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ANWXGameModeBase* K2Node_DynamicCast_AsNWXGame_Mode_Base_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_SimulationStateManager_C* CallFunc_GetManager_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 K2Node_CustomEvent_EncounterIndex, class FName K2Node_CustomEvent_PlugName, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_GetLoadedLevelInstanceName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "ExecuteUbergraph_BP_Encounter_Gym");

	Params::ABP_Encounter_Gym_C_ExecuteUbergraph_BP_Encounter_Gym_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetEncounterDataAssets_DataAssets = CallFunc_GetEncounterDataAssets_DataAssets;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base = K2Node_DynamicCast_AsNWXGame_Mode_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXGame_Mode_Base_1 = K2Node_DynamicCast_AsNWXGame_Mode_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetManager_ReturnValue = CallFunc_GetManager_ReturnValue;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Manager_Interface = K2Node_DynamicCast_AsEncounter_Manager_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_EncounterIndex = K2Node_CustomEvent_EncounterIndex;
	Parms.K2Node_CustomEvent_PlugName = K2Node_CustomEvent_PlugName;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetLoadedLevelInstanceName_ReturnValue = CallFunc_GetLoadedLevelInstanceName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_Gym.BP_Encounter_Gym_C.OnEncounterAssetsLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_Gym_C::OnEncounterAssetsLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Gym_C", "OnEncounterAssetsLoaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


