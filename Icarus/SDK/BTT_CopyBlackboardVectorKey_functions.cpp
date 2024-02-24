#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_CopyBlackboardVectorKey.BTT_CopyBlackboardVectorKey_C
// (None)

class UClass* UBTT_CopyBlackboardVectorKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_CopyBlackboardVectorKey_C");

	return Clss;
}


// BTT_CopyBlackboardVectorKey_C BTT_CopyBlackboardVectorKey.Default__BTT_CopyBlackboardVectorKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_CopyBlackboardVectorKey_C* UBTT_CopyBlackboardVectorKey_C::GetDefaultObj()
{
	static class UBTT_CopyBlackboardVectorKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_CopyBlackboardVectorKey_C*>(UBTT_CopyBlackboardVectorKey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_CopyBlackboardVectorKey.BTT_CopyBlackboardVectorKey_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_CopyBlackboardVectorKey_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_CopyBlackboardVectorKey_C", "ReceiveExecute");

	Params::UBTT_CopyBlackboardVectorKey_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_CopyBlackboardVectorKey.BTT_CopyBlackboardVectorKey_C.ExecuteUbergraph_BTT_CopyBlackboardVectorKey
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_CopyBlackboardVectorKey_C::ExecuteUbergraph_BTT_CopyBlackboardVectorKey(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_CopyBlackboardVectorKey_C", "ExecuteUbergraph_BTT_CopyBlackboardVectorKey");

	Params::UBTT_CopyBlackboardVectorKey_C_ExecuteUbergraph_BTT_CopyBlackboardVectorKey_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue = CallFunc_GetBlackboardValueAsVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


