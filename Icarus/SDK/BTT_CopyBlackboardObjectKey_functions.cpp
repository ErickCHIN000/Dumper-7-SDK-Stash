#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_CopyBlackboardObjectKey.BTT_CopyBlackboardObjectKey_C
// (None)

class UClass* UBTT_CopyBlackboardObjectKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_CopyBlackboardObjectKey_C");

	return Clss;
}


// BTT_CopyBlackboardObjectKey_C BTT_CopyBlackboardObjectKey.Default__BTT_CopyBlackboardObjectKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_CopyBlackboardObjectKey_C* UBTT_CopyBlackboardObjectKey_C::GetDefaultObj()
{
	static class UBTT_CopyBlackboardObjectKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_CopyBlackboardObjectKey_C*>(UBTT_CopyBlackboardObjectKey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_CopyBlackboardObjectKey.BTT_CopyBlackboardObjectKey_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_CopyBlackboardObjectKey_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_CopyBlackboardObjectKey_C", "ReceiveExecute");

	Params::UBTT_CopyBlackboardObjectKey_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_CopyBlackboardObjectKey.BTT_CopyBlackboardObjectKey_C.ExecuteUbergraph_BTT_CopyBlackboardObjectKey
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetBlackboardValueAsObject_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_CopyBlackboardObjectKey_C::ExecuteUbergraph_BTT_CopyBlackboardObjectKey(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_CopyBlackboardObjectKey_C", "ExecuteUbergraph_BTT_CopyBlackboardObjectKey");

	Params::UBTT_CopyBlackboardObjectKey_C_ExecuteUbergraph_BTT_CopyBlackboardObjectKey_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsObject_ReturnValue = CallFunc_GetBlackboardValueAsObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


