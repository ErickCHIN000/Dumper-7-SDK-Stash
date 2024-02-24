#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Music.BPFL_Music_C
// (None)

class UClass* UBPFL_Music_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Music_C");

	return Clss;
}


// BPFL_Music_C BPFL_Music.Default__BPFL_Music_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Music_C* UBPFL_Music_C::GetDefaultObj()
{
	static class UBPFL_Music_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Music_C*>(UBPFL_Music_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Music.BPFL_Music_C.Get BPMusic Manager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_Music_Manager_C*         MusicManager                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UMusicManager*               CallFunc_Get_Music_Manager_MusicManager                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_Music_Manager_C*         K2Node_DynamicCast_AsBP_Music_Manager                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Music_C::Get_BPMusic_Manager(class UObject* __WorldContext, class UBP_Music_Manager_C** MusicManager, class UMusicManager* CallFunc_Get_Music_Manager_MusicManager, class UBP_Music_Manager_C* K2Node_DynamicCast_AsBP_Music_Manager, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Music_C", "Get BPMusic Manager");

	Params::UBPFL_Music_C_Get_BPMusic_Manager_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Get_Music_Manager_MusicManager = CallFunc_Get_Music_Manager_MusicManager;
	Parms.K2Node_DynamicCast_AsBP_Music_Manager = K2Node_DynamicCast_AsBP_Music_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (MusicManager != nullptr)
		*MusicManager = Parms.MusicManager;

}


// Function BPFL_Music.BPFL_Music_C.BP Music Manager Revoke State
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkStateValue*               Music_State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_Music_Manager_C*         CallFunc_Get_BPMusic_Manager_MusicManager                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Music_C::BP_Music_Manager_Revoke_State(class UAkStateValue* Music_State, class UObject* __WorldContext, class UBP_Music_Manager_C* CallFunc_Get_BPMusic_Manager_MusicManager, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Music_C", "BP Music Manager Revoke State");

	Params::UBPFL_Music_C_BP_Music_Manager_Revoke_State_Params Parms{};

	Parms.Music_State = Music_State;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Get_BPMusic_Manager_MusicManager = CallFunc_Get_BPMusic_Manager_MusicManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Music.BPFL_Music_C.BP Music Manager Set State
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkStateValue*               Music_State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMusicPriority          Priority                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalMusicManager*         Global_Music_Manager                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_Music_Manager_C*         BPMusicManager                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGlobalMusicManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Music_Manager_C*         CallFunc_Get_BPMusic_Manager_MusicManager                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TrySetMusicState_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Music_C::BP_Music_Manager_Set_State(class UAkStateValue* Music_State, enum class EMusicPriority Priority, class UObject* __WorldContext, class UGlobalMusicManager* Global_Music_Manager, class UBP_Music_Manager_C* BPMusicManager, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UBP_Music_Manager_C* CallFunc_Get_BPMusic_Manager_MusicManager, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_TrySetMusicState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Music_C", "BP Music Manager Set State");

	Params::UBPFL_Music_C_BP_Music_Manager_Set_State_Params Parms{};

	Parms.Music_State = Music_State;
	Parms.Priority = Priority;
	Parms.__WorldContext = __WorldContext;
	Parms.Global_Music_Manager = Global_Music_Manager;
	Parms.BPMusicManager = BPMusicManager;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Get_BPMusic_Manager_MusicManager = CallFunc_Get_BPMusic_Manager_MusicManager;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_TrySetMusicState_ReturnValue = CallFunc_TrySetMusicState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Music.BPFL_Music_C.Get Music Manager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMusicManager*               MusicManager                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicManager*               CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Music_C::Get_Music_Manager(class UObject* __WorldContext, class UMusicManager** MusicManager, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMusicManager* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Music_C", "Get Music Manager");

	Params::UBPFL_Music_C_Get_Music_Manager_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (MusicManager != nullptr)
		*MusicManager = Parms.MusicManager;

}

}


