#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C
// (Actor)

class UClass* AUDS_Cloud_Paint_Container_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UDS_Cloud_Paint_Container_C");

	return Clss;
}


// UDS_Cloud_Paint_Container_C UDS_Cloud_Paint_Container.Default__UDS_Cloud_Paint_Container_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUDS_Cloud_Paint_Container_C* AUDS_Cloud_Paint_Container_C::GetDefaultObj()
{
	static class AUDS_Cloud_Paint_Container_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUDS_Cloud_Paint_Container_C*>(AUDS_Cloud_Paint_Container_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUDS_Cloud_Paint_Container_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UDS_Cloud_Paint_Container_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUDS_Cloud_Paint_Container_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UDS_Cloud_Paint_Container_C", "ReceiveEndPlay");

	Params::AUDS_Cloud_Paint_Container_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ExecuteUbergraph_UDS_Cloud_Paint_Container
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EEndPlayReason>  K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUDS_Cloud_Paint_Container_C::ExecuteUbergraph_UDS_Cloud_Paint_Container(int32 EntryPoint, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AUltra_Dynamic_Sky_C* CallFunc_GetActorOfClass_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_1, TArray<enum class EEndPlayReason>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UDS_Cloud_Paint_Container_C", "ExecuteUbergraph_UDS_Cloud_Paint_Container");

	Params::AUDS_Cloud_Paint_Container_C_ExecuteUbergraph_UDS_Cloud_Paint_Container_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


