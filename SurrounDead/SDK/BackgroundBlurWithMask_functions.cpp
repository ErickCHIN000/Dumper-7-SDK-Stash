#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class BackgroundBlurWithMask.BackgroundBlurWithMask
// (None)

class UClass* UBackgroundBlurWithMask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackgroundBlurWithMask");

	return Clss;
}


// BackgroundBlurWithMask BackgroundBlurWithMask.Default__BackgroundBlurWithMask
// (Public, ClassDefaultObject, ArchetypeObject)

class UBackgroundBlurWithMask* UBackgroundBlurWithMask::GetDefaultObj()
{
	static class UBackgroundBlurWithMask* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackgroundBlurWithMask*>(UBackgroundBlurWithMask::StaticClass()->DefaultObject);

	return Default;
}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetVerticalAlignment");

	Params::UBackgroundBlurWithMask_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetUseMaskMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInUseMaskMaterial                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetUseMaskMaterial(bool bInUseMaskMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetUseMaskMaterial");

	Params::UBackgroundBlurWithMask_SetUseMaskMaterial_Params Parms{};

	Parms.bInUseMaskMaterial = bInUseMaskMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetPadding");

	Params::UBackgroundBlurWithMask_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskTextureChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMaskTextureChannel     InMaskTextureChannel                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetMaskTextureChannel(enum class EMaskTextureChannel InMaskTextureChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetMaskTextureChannel");

	Params::UBackgroundBlurWithMask_SetMaskTextureChannel_Params Parms{};

	Parms.InMaskTextureChannel = InMaskTextureChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  InMaskTexture                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetMaskTexture(class UTexture2D* InMaskTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetMaskTexture");

	Params::UBackgroundBlurWithMask_SetMaskTexture_Params Parms{};

	Parms.InMaskTexture = InMaskTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetMaskMaterialSetting
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMaskMaterialSetting        InMaskMaterialSetting                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetMaskMaterialSetting(struct FMaskMaterialSetting& InMaskMaterialSetting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetMaskMaterialSetting");

	Params::UBackgroundBlurWithMask_SetMaskMaterialSetting_Params Parms{};

	Parms.InMaskMaterialSetting = InMaskMaterialSetting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetLowQualityFallbackBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetLowQualityFallbackBrush(struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetLowQualityFallbackBrush");

	Params::UBackgroundBlurWithMask_SetLowQualityFallbackBrush_Params Parms{};

	Parms.InBrush = InBrush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetHorizontalAlignment");

	Params::UBackgroundBlurWithMask_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetBlurStrength
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InStrength                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetBlurStrength(float InStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetBlurStrength");

	Params::UBackgroundBlurWithMask_SetBlurStrength_Params Parms{};

	Parms.InStrength = InStrength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetBlurRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InBlurRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetBlurRadius(int32 InBlurRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetBlurRadius");

	Params::UBackgroundBlurWithMask_SetBlurRadius_Params Parms{};

	Parms.InBlurRadius = InBlurRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.SetApplyAlphaToBlur
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInApplyAlphaToBlur                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMask::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "SetApplyAlphaToBlur");

	Params::UBackgroundBlurWithMask_SetApplyAlphaToBlur_Params Parms{};

	Parms.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.RedrawMaskMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBackgroundBlurWithMask::RedrawMaskMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "RedrawMaskMaterial");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMask.GetMaskTextureInUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UBackgroundBlurWithMask::GetMaskTextureInUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMask", "GetMaskTextureInUse");

	Params::UBackgroundBlurWithMask_GetMaskTextureInUse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class BackgroundBlurWithMask.BackgroundBlurWithMaskSlot
// (None)

class UClass* UBackgroundBlurWithMaskSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackgroundBlurWithMaskSlot");

	return Clss;
}


// BackgroundBlurWithMaskSlot BackgroundBlurWithMask.Default__BackgroundBlurWithMaskSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UBackgroundBlurWithMaskSlot* UBackgroundBlurWithMaskSlot::GetDefaultObj()
{
	static class UBackgroundBlurWithMaskSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackgroundBlurWithMaskSlot*>(UBackgroundBlurWithMaskSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMaskSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMaskSlot", "SetVerticalAlignment");

	Params::UBackgroundBlurWithMaskSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMaskSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMaskSlot", "SetPadding");

	Params::UBackgroundBlurWithMaskSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function BackgroundBlurWithMask.BackgroundBlurWithMaskSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurWithMaskSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurWithMaskSlot", "SetHorizontalAlignment");

	Params::UBackgroundBlurWithMaskSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


