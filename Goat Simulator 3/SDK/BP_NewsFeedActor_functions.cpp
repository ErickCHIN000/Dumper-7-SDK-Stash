#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NewsFeedActor.BP_NewsFeedActor_C
// (Actor)

class UClass* ABP_NewsFeedActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NewsFeedActor_C");

	return Clss;
}


// BP_NewsFeedActor_C BP_NewsFeedActor.Default__BP_NewsFeedActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NewsFeedActor_C* ABP_NewsFeedActor_C::GetDefaultObj()
{
	static class ABP_NewsFeedActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NewsFeedActor_C*>(ABP_NewsFeedActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NewsFeedActor.BP_NewsFeedActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NewsFeedActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NewsFeedActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NewsFeedActor.BP_NewsFeedActor_C.ExecuteUbergraph_BP_NewsFeedActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFakeNews                   K2Node_MakeStruct_FakeNews                                       (None)
// struct FFakeNews                   K2Node_MakeStruct_FakeNews_1                                     (None)
// struct FFakeNews                   K2Node_MakeStruct_FakeNews_2                                     (None)
// struct FFakeNews                   K2Node_MakeStruct_FakeNews_3                                     (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFakeNews                   K2Node_MakeStruct_FakeNews_4                                     (None)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NewsFeedActor_C::ExecuteUbergraph_BP_NewsFeedActor(int32 EntryPoint, const struct FFakeNews& K2Node_MakeStruct_FakeNews, const struct FFakeNews& K2Node_MakeStruct_FakeNews_1, const struct FFakeNews& K2Node_MakeStruct_FakeNews_2, const struct FFakeNews& K2Node_MakeStruct_FakeNews_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, const struct FFakeNews& K2Node_MakeStruct_FakeNews_4, int32 CallFunc_Array_Add_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NewsFeedActor_C", "ExecuteUbergraph_BP_NewsFeedActor");

	Params::ABP_NewsFeedActor_C_ExecuteUbergraph_BP_NewsFeedActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_FakeNews = K2Node_MakeStruct_FakeNews;
	Parms.K2Node_MakeStruct_FakeNews_1 = K2Node_MakeStruct_FakeNews_1;
	Parms.K2Node_MakeStruct_FakeNews_2 = K2Node_MakeStruct_FakeNews_2;
	Parms.K2Node_MakeStruct_FakeNews_3 = K2Node_MakeStruct_FakeNews_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_FakeNews_4 = K2Node_MakeStruct_FakeNews_4;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


