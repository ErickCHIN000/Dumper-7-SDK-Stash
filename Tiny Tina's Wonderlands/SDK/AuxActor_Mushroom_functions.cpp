#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AuxActor_Mushroom.AuxActor_Mushroom_C
// (Actor)

class UClass* AAuxActor_Mushroom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AuxActor_Mushroom_C");

	return Clss;
}


// AuxActor_Mushroom_C AuxActor_Mushroom.Default__AuxActor_Mushroom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAuxActor_Mushroom_C* AAuxActor_Mushroom_C::GetDefaultObj()
{
	static class AAuxActor_Mushroom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAuxActor_Mushroom_C*>(AAuxActor_Mushroom_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AuxActor_Mushroom.AuxActor_Mushroom_C.SetMushroomAttachmentEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnabledState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGestaltPartData_Mesh*       GestaltPart                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAuxActor_Mushroom_C::SetMushroomAttachmentEnabled(bool EnabledState, class UGestaltPartData_Mesh* GestaltPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Mushroom_C", "SetMushroomAttachmentEnabled");

	Params::AAuxActor_Mushroom_C_SetMushroomAttachmentEnabled_Params Parms{};

	Parms.EnabledState = EnabledState;
	Parms.GestaltPart = GestaltPart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AuxActor_Mushroom.AuxActor_Mushroom_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAuxActor_Mushroom_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Mushroom_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Mushroom.AuxActor_Mushroom_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAuxActor_Mushroom_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Mushroom_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AuxActor_Mushroom.AuxActor_Mushroom_C.ExecuteUbergraph_AuxActor_Mushroom
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingClass_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAuxActor_Mushroom_C::ExecuteUbergraph_AuxActor_Mushroom(int32 EntryPoint, bool CallFunc_IsPlayingClass_ReturnValue, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, bool CallFunc_IsPlayingClass_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AuxActor_Mushroom_C", "ExecuteUbergraph_AuxActor_Mushroom");

	Params::AAuxActor_Mushroom_C_ExecuteUbergraph_AuxActor_Mushroom_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsPlayingClass_ReturnValue = CallFunc_IsPlayingClass_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_IsPlayingClass_ReturnValue1 = CallFunc_IsPlayingClass_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


