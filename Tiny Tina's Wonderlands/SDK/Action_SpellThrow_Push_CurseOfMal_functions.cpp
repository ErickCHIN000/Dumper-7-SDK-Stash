#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SpellThrow_Push_CurseOfMal.Action_SpellThrow_Push_CurseOfMal_C
// (None)

class UClass* UAction_SpellThrow_Push_CurseOfMal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SpellThrow_Push_CurseOfMal_C");

	return Clss;
}


// Action_SpellThrow_Push_CurseOfMal_C Action_SpellThrow_Push_CurseOfMal.Default__Action_SpellThrow_Push_CurseOfMal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SpellThrow_Push_CurseOfMal_C* UAction_SpellThrow_Push_CurseOfMal_C::GetDefaultObj()
{
	static class UAction_SpellThrow_Push_CurseOfMal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SpellThrow_Push_CurseOfMal_C*>(UAction_SpellThrow_Push_CurseOfMal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_SpellThrow_Push_CurseOfMal.Action_SpellThrow_Push_CurseOfMal_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_SpellThrow_Push_CurseOfMal_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Push_CurseOfMal_C", "OnBegin");

	Params::UAction_SpellThrow_Push_CurseOfMal_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_SpellThrow_Push_CurseOfMal.Action_SpellThrow_Push_CurseOfMal_C.SpellCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_SpellThrow_Push_CurseOfMal_C::SpellCast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Push_CurseOfMal_C", "SpellCast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_SpellThrow_Push_CurseOfMal.Action_SpellThrow_Push_CurseOfMal_C.ExecuteUbergraph_Action_SpellThrow_Push_CurseOfMal
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetSpellElement_ReturnedElement                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetCollectionFX_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_SpellThrow_Push_CurseOfMal_C::ExecuteUbergraph_Action_SpellThrow_Push_CurseOfMal(int32 EntryPoint, class AActor* K2Node_Event_Actor, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Push_CurseOfMal_C", "ExecuteUbergraph_Action_SpellThrow_Push_CurseOfMal");

	Params::UAction_SpellThrow_Push_CurseOfMal_C_ExecuteUbergraph_Action_SpellThrow_Push_CurseOfMal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetSpellElement_ReturnedElement = CallFunc_GetSpellElement_ReturnedElement;
	Parms.CallFunc_GetCollectionFX_ReturnValue = CallFunc_GetCollectionFX_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_PlayFX_1stFXComponent = CallFunc_PlayFX_1stFXComponent;
	Parms.CallFunc_PlayFX_3rdFXComponent = CallFunc_PlayFX_3rdFXComponent;
	Parms.CallFunc_PlayFX_Socket = CallFunc_PlayFX_Socket;

	UObject::ProcessEvent(Func, &Parms);

}

}


