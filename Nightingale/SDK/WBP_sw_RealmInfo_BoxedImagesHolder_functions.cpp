#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfo_BoxedImagesHolder.WBP_sw_RealmInfo_BoxedImagesHolder_C
// (None)

class UClass* UWBP_sw_RealmInfo_BoxedImagesHolder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfo_BoxedImagesHolder_C");

	return Clss;
}


// WBP_sw_RealmInfo_BoxedImagesHolder_C WBP_sw_RealmInfo_BoxedImagesHolder.Default__WBP_sw_RealmInfo_BoxedImagesHolder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfo_BoxedImagesHolder_C* UWBP_sw_RealmInfo_BoxedImagesHolder_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfo_BoxedImagesHolder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfo_BoxedImagesHolder_C*>(UWBP_sw_RealmInfo_BoxedImagesHolder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfo_BoxedImagesHolder.WBP_sw_RealmInfo_BoxedImagesHolder_C.DisplayNoTextInfoAndContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_BoxedImagesHolder_C::DisplayNoTextInfoAndContainer(bool ShouldDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_BoxedImagesHolder_C", "DisplayNoTextInfoAndContainer");

	Params::UWBP_sw_RealmInfo_BoxedImagesHolder_C_DisplayNoTextInfoAndContainer_Params Parms{};

	Parms.ShouldDisplay = ShouldDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfo_BoxedImagesHolder.WBP_sw_RealmInfo_BoxedImagesHolder_C.AddImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_sw_RealmInfo_GenericImage_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_BoxedImagesHolder_C::AddImage(TSoftObjectPtr<class UTexture2D> NewParam, class UWBP_sw_RealmInfo_GenericImage_C* CallFunc_Create_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_BoxedImagesHolder_C", "AddImage");

	Params::UWBP_sw_RealmInfo_BoxedImagesHolder_C_AddImage_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfo_BoxedImagesHolder.WBP_sw_RealmInfo_BoxedImagesHolder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_RealmInfo_BoxedImagesHolder_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_BoxedImagesHolder_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_RealmInfo_BoxedImagesHolder.WBP_sw_RealmInfo_BoxedImagesHolder_C.ExecuteUbergraph_WBP_sw_RealmInfo_BoxedImagesHolder
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfo_BoxedImagesHolder_C::ExecuteUbergraph_WBP_sw_RealmInfo_BoxedImagesHolder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfo_BoxedImagesHolder_C", "ExecuteUbergraph_WBP_sw_RealmInfo_BoxedImagesHolder");

	Params::UWBP_sw_RealmInfo_BoxedImagesHolder_C_ExecuteUbergraph_WBP_sw_RealmInfo_BoxedImagesHolder_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


