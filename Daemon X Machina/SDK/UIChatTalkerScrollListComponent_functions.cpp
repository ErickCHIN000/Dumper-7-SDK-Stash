#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIChatTalkerScrollListComponent.UIChatTalkerScrollListComponent_C
// (None)

class UClass* UUIChatTalkerScrollListComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIChatTalkerScrollListComponent_C");

	return Clss;
}


// UIChatTalkerScrollListComponent_C UIChatTalkerScrollListComponent.Default__UIChatTalkerScrollListComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIChatTalkerScrollListComponent_C* UUIChatTalkerScrollListComponent_C::GetDefaultObj()
{
	static class UUIChatTalkerScrollListComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIChatTalkerScrollListComponent_C*>(UUIChatTalkerScrollListComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIChatTalkerScrollListComponent.UIChatTalkerScrollListComponent_C.InitializeBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UOnl_chat_list00_C*          K2Node_DynamicCast_AsOnl_Chat_List_00                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUIChatTalkerScrollListComponent_C::InitializeBP(class UOnl_chat_list00_C* K2Node_DynamicCast_AsOnl_Chat_List_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIChatTalkerScrollListComponent_C", "InitializeBP");

	Params::UUIChatTalkerScrollListComponent_C_InitializeBP_Params Parms{};

	Parms.K2Node_DynamicCast_AsOnl_Chat_List_00 = K2Node_DynamicCast_AsOnl_Chat_List_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


