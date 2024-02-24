#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AttachmentIcon.UMG_AttachmentIcon_C
// (None)

class UClass* UUMG_AttachmentIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AttachmentIcon_C");

	return Clss;
}


// UMG_AttachmentIcon_C UMG_AttachmentIcon.Default__UMG_AttachmentIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AttachmentIcon_C* UUMG_AttachmentIcon_C::GetDefaultObj()
{
	static class UUMG_AttachmentIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AttachmentIcon_C*>(UUMG_AttachmentIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AttachmentIcon.UMG_AttachmentIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_AttachmentIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AttachmentIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AttachmentIcon.UMG_AttachmentIcon_C.ExecuteUbergraph_UMG_AttachmentIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AttachmentIcon_C::ExecuteUbergraph_UMG_AttachmentIcon(int32 EntryPoint, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AttachmentIcon_C", "ExecuteUbergraph_UMG_AttachmentIcon");

	Params::UUMG_AttachmentIcon_C_ExecuteUbergraph_UMG_AttachmentIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


