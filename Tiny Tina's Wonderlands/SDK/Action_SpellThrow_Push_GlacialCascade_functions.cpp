#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SpellThrow_Push_GlacialCascade.Action_SpellThrow_Push_GlacialCascade_C
// (None)

class UClass* UAction_SpellThrow_Push_GlacialCascade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SpellThrow_Push_GlacialCascade_C");

	return Clss;
}


// Action_SpellThrow_Push_GlacialCascade_C Action_SpellThrow_Push_GlacialCascade.Default__Action_SpellThrow_Push_GlacialCascade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SpellThrow_Push_GlacialCascade_C* UAction_SpellThrow_Push_GlacialCascade_C::GetDefaultObj()
{
	static class UAction_SpellThrow_Push_GlacialCascade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SpellThrow_Push_GlacialCascade_C*>(UAction_SpellThrow_Push_GlacialCascade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_SpellThrow_Push_GlacialCascade.Action_SpellThrow_Push_GlacialCascade_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_SpellThrow_Push_GlacialCascade_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Push_GlacialCascade_C", "OnBegin");

	Params::UAction_SpellThrow_Push_GlacialCascade_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_SpellThrow_Push_GlacialCascade.Action_SpellThrow_Push_GlacialCascade_C.SpellCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_SpellThrow_Push_GlacialCascade_C::SpellCast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Push_GlacialCascade_C", "SpellCast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_SpellThrow_Push_GlacialCascade.Action_SpellThrow_Push_GlacialCascade_C.ExecuteUbergraph_Action_SpellThrow_Push_GlacialCascade
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       CallFunc_GetSpellElement_ReturnedElement                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_1stFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_PlayFX_3rdFXComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_PlayFX_Socket                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_SpellThrow_Push_GlacialCascade_C::ExecuteUbergraph_Action_SpellThrow_Push_GlacialCascade(int32 EntryPoint, class AActor* K2Node_Event_Actor, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_SpellThrow_Push_GlacialCascade_C", "ExecuteUbergraph_Action_SpellThrow_Push_GlacialCascade");

	Params::UAction_SpellThrow_Push_GlacialCascade_C_ExecuteUbergraph_Action_SpellThrow_Push_GlacialCascade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_GetSpellElement_ReturnedElement = CallFunc_GetSpellElement_ReturnedElement;
	Parms.CallFunc_PlayFX_1stFXComponent = CallFunc_PlayFX_1stFXComponent;
	Parms.CallFunc_PlayFX_3rdFXComponent = CallFunc_PlayFX_3rdFXComponent;
	Parms.CallFunc_PlayFX_Socket = CallFunc_PlayFX_Socket;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


