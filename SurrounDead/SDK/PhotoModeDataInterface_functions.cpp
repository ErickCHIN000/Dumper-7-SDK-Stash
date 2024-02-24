#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PhotoModeDataInterface.PhotoModeDataInterface_C
// (None)

class UClass* IPhotoModeDataInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhotoModeDataInterface_C");

	return Clss;
}


// PhotoModeDataInterface_C PhotoModeDataInterface.Default__PhotoModeDataInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IPhotoModeDataInterface_C* IPhotoModeDataInterface_C::GetDefaultObj()
{
	static class IPhotoModeDataInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IPhotoModeDataInterface_C*>(IPhotoModeDataInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PhotoModeDataInterface.PhotoModeDataInterface_C.TabToOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonTab_C*          CommonButtonPressed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IPhotoModeDataInterface_C::TabToOpen(int32 TabIndex, class UCommonButtonTab_C* CommonButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeDataInterface_C", "TabToOpen");

	Params::IPhotoModeDataInterface_C_TabToOpen_Params Parms{};

	Parms.TabIndex = TabIndex;
	Parms.CommonButtonPressed = CommonButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeDataInterface.PhotoModeDataInterface_C.SendPhotoData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPhotosData                 PhotoData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IPhotoModeDataInterface_C::SendPhotoData(const struct FPhotosData& PhotoData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeDataInterface_C", "SendPhotoData");

	Params::IPhotoModeDataInterface_C_SendPhotoData_Params Parms{};

	Parms.PhotoData = PhotoData;

	UObject::ProcessEvent(Func, &Parms);

}

}


