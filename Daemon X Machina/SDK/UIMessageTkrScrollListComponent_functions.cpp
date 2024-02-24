#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIMessageTkrScrollListComponent.UIMessageTkrScrollListComponent_C
// (None)

class UClass* UUIMessageTkrScrollListComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIMessageTkrScrollListComponent_C");

	return Clss;
}


// UIMessageTkrScrollListComponent_C UIMessageTkrScrollListComponent.Default__UIMessageTkrScrollListComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIMessageTkrScrollListComponent_C* UUIMessageTkrScrollListComponent_C::GetDefaultObj()
{
	static class UUIMessageTkrScrollListComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIMessageTkrScrollListComponent_C*>(UUIMessageTkrScrollListComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIMessageTkrScrollListComponent.UIMessageTkrScrollListComponent_C.InitializeBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UOnl_chat_page02_C*          K2Node_DynamicCast_AsOnl_Chat_Page_02                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUIMessageTkrScrollListComponent_C::InitializeBP(class UOnl_chat_page02_C* K2Node_DynamicCast_AsOnl_Chat_Page_02, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIMessageTkrScrollListComponent_C", "InitializeBP");

	Params::UUIMessageTkrScrollListComponent_C_InitializeBP_Params Parms{};

	Parms.K2Node_DynamicCast_AsOnl_Chat_Page_02 = K2Node_DynamicCast_AsOnl_Chat_Page_02;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


