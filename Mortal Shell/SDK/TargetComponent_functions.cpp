#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TargetComponent.TargetComponent_C
// (SceneComponent)

class UClass* UTargetComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TargetComponent_C");

	return Clss;
}


// TargetComponent_C TargetComponent.Default__TargetComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTargetComponent_C* UTargetComponent_C::GetDefaultObj()
{
	static class UTargetComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTargetComponent_C*>(UTargetComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TargetComponent.TargetComponent_C.GetOwnerCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABaseCharacter_C*            Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetComponent_C::GetOwnerCharacter(class ABaseCharacter_C** Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetComponent_C", "GetOwnerCharacter");

	Params::UTargetComponent_C_GetOwnerCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function TargetComponent.TargetComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UTargetComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TargetComponent.TargetComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTargetComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetComponent_C", "ReceiveTick");

	Params::UTargetComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TargetComponent.TargetComponent_C.ExecuteUbergraph_TargetComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetParentComponents_Parents                             (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     CallFunc_GetParentComponents_Parents_1                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTargetComponent_C::ExecuteUbergraph_TargetComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds, TArray<class USceneComponent*>& CallFunc_GetParentComponents_Parents, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_K2_AttachToComponent_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetParentComponents_Parents_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TargetComponent_C", "ExecuteUbergraph_TargetComponent");

	Params::UTargetComponent_C_ExecuteUbergraph_TargetComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetParentComponents_Parents = CallFunc_GetParentComponents_Parents;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetParentComponents_Parents_1 = CallFunc_GetParentComponents_Parents_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


