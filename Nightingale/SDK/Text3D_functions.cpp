#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Text3D.Text3DActor
// (Actor)

class UClass* AText3DActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Text3DActor");

	return Clss;
}


// Text3DActor Text3D.Default__Text3DActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AText3DActor* AText3DActor::GetDefaultObj()
{
	static class AText3DActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AText3DActor*>(AText3DActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Text3D.Text3DCharacterTransform
// (SceneComponent)

class UClass* UText3DCharacterTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Text3DCharacterTransform");

	return Clss;
}


// Text3DCharacterTransform Text3D.Default__Text3DCharacterTransform
// (Public, ClassDefaultObject, ArchetypeObject)

class UText3DCharacterTransform* UText3DCharacterTransform::GetDefaultObj()
{
	static class UText3DCharacterTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<UText3DCharacterTransform*>(UText3DCharacterTransform::StaticClass()->DefaultObject);

	return Default;
}


// Function Text3D.Text3DCharacterTransform.SetScaleRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetScaleRange(float Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetScaleRange");

	Params::UText3DCharacterTransform_SetScaleRange_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetScaleProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetScaleProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetScaleProgress");

	Params::UText3DCharacterTransform_SetScaleProgress_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetScaleOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DCharacterEffectOrderOrder                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetScaleOrder(enum class EText3DCharacterEffectOrder Order)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetScaleOrder");

	Params::UText3DCharacterTransform_SetScaleOrder_Params Parms{};

	Parms.Order = Order;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetScaleEnd
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetScaleEnd(const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetScaleEnd");

	Params::UText3DCharacterTransform_SetScaleEnd_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetScaleEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetScaleEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetScaleEnabled");

	Params::UText3DCharacterTransform_SetScaleEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetScaleBegin
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetScaleBegin(const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetScaleBegin");

	Params::UText3DCharacterTransform_SetScaleBegin_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetRotateRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetRotateRange(float Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetRotateRange");

	Params::UText3DCharacterTransform_SetRotateRange_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetRotateProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetRotateProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetRotateProgress");

	Params::UText3DCharacterTransform_SetRotateProgress_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetRotateOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DCharacterEffectOrderOrder                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetRotateOrder(enum class EText3DCharacterEffectOrder Order)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetRotateOrder");

	Params::UText3DCharacterTransform_SetRotateOrder_Params Parms{};

	Parms.Order = Order;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetRotateEnd
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetRotateEnd(const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetRotateEnd");

	Params::UText3DCharacterTransform_SetRotateEnd_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetRotateEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetRotateEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetRotateEnabled");

	Params::UText3DCharacterTransform_SetRotateEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetRotateBegin
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetRotateBegin(const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetRotateBegin");

	Params::UText3DCharacterTransform_SetRotateBegin_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetLocationRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetLocationRange(float Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetLocationRange");

	Params::UText3DCharacterTransform_SetLocationRange_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetLocationProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Progress                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetLocationProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetLocationProgress");

	Params::UText3DCharacterTransform_SetLocationProgress_Params Parms{};

	Parms.Progress = Progress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetLocationOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DCharacterEffectOrderOrder                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetLocationOrder(enum class EText3DCharacterEffectOrder Order)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetLocationOrder");

	Params::UText3DCharacterTransform_SetLocationOrder_Params Parms{};

	Parms.Order = Order;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetLocationEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetLocationEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetLocationEnabled");

	Params::UText3DCharacterTransform_SetLocationEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DCharacterTransform.SetLocationDistance
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DCharacterTransform::SetLocationDistance(const struct FVector& Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DCharacterTransform", "SetLocationDistance");

	Params::UText3DCharacterTransform_SetLocationDistance_Params Parms{};

	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Text3D.Text3DComponent
// (SceneComponent)

class UClass* UText3DComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Text3DComponent");

	return Clss;
}


// Text3DComponent Text3D.Default__Text3DComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UText3DComponent* UText3DComponent::GetDefaultObj()
{
	static class UText3DComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UText3DComponent*>(UText3DComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction Text3D.Text3DComponent.TextGenerated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UText3DComponent::TextGenerated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "TextGenerated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Text3D.Text3DComponent.SetWordSpacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetWordSpacing(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetWordSpacing");

	Params::UText3DComponent_SetWordSpacing_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DVerticalTextAlignmentValue                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetVerticalAlignment(enum class EText3DVerticalTextAlignment Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetVerticalAlignment");

	Params::UText3DComponent_SetVerticalAlignment_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UText3DComponent::SetText(class FText& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetText");

	Params::UText3DComponent_SetText_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetScaleProportionally
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetScaleProportionally(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetScaleProportionally");

	Params::UText3DComponent_SetScaleProportionally_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetOutlineExpand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetOutlineExpand(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetOutlineExpand");

	Params::UText3DComponent_SetOutlineExpand_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetMaxWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetMaxWidth(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetMaxWidth");

	Params::UText3DComponent_SetMaxWidth_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetMaxHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetMaxHeight(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetMaxHeight");

	Params::UText3DComponent_SetMaxHeight_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetLineSpacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetLineSpacing(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetLineSpacing");

	Params::UText3DComponent_SetLineSpacing_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetKerning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetKerning(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetKerning");

	Params::UText3DComponent_SetKerning_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DHorizontalTextAlignmentValue                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetHorizontalAlignment(enum class EText3DHorizontalTextAlignment Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetHorizontalAlignment");

	Params::UText3DComponent_SetHorizontalAlignment_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetHasOutline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetHasOutline(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetHasOutline");

	Params::UText3DComponent_SetHasOutline_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetHasMaxWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetHasMaxWidth(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetHasMaxWidth");

	Params::UText3DComponent_SetHasMaxWidth_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetHasMaxHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetHasMaxHeight(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetHasMaxHeight");

	Params::UText3DComponent_SetHasMaxHeight_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetFrontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetFrontMaterial(class UMaterialInterface* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetFrontMaterial");

	Params::UText3DComponent_SetFrontMaterial_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetFreeze
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFreeze                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetFreeze(bool bFreeze)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetFreeze");

	Params::UText3DComponent_SetFreeze_Params Parms{};

	Parms.bFreeze = bFreeze;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFont*                       InFont                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetFont(class UFont* InFont)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetFont");

	Params::UText3DComponent_SetFont_Params Parms{};

	Parms.InFont = InFont;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetExtrudeMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetExtrudeMaterial(class UMaterialInterface* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetExtrudeMaterial");

	Params::UText3DComponent_SetExtrudeMaterial_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetExtrude
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetExtrude(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetExtrude");

	Params::UText3DComponent_SetExtrude_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetCastShadow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewCastShadow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetCastShadow(bool NewCastShadow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetCastShadow");

	Params::UText3DComponent_SetCastShadow_Params Parms{};

	Parms.NewCastShadow = NewCastShadow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetBevelType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EText3DBevelType        Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetBevelType(enum class EText3DBevelType Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetBevelType");

	Params::UText3DComponent_SetBevelType_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetBevelSegments
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetBevelSegments(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetBevelSegments");

	Params::UText3DComponent_SetBevelSegments_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetBevelMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetBevelMaterial(class UMaterialInterface* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetBevelMaterial");

	Params::UText3DComponent_SetBevelMaterial_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetBevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetBevel(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetBevel");

	Params::UText3DComponent_SetBevel_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.SetBackMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::SetBackMaterial(class UMaterialInterface* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "SetBackMaterial");

	Params::UText3DComponent_SetBackMaterial_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Text3D.Text3DComponent.GetTextScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UText3DComponent::GetTextScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "GetTextScale");

	Params::UText3DComponent_GetTextScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text3D.Text3DComponent.GetGlyphMeshComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UStaticMeshComponent*>ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UStaticMeshComponent*> UText3DComponent::GetGlyphMeshComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "GetGlyphMeshComponents");

	Params::UText3DComponent_GetGlyphMeshComponents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text3D.Text3DComponent.GetGlyphMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStaticMeshComponent* UText3DComponent::GetGlyphMeshComponent(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "GetGlyphMeshComponent");

	Params::UText3DComponent_GetGlyphMeshComponent_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text3D.Text3DComponent.GetGlyphKerningComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class USceneComponent*>     ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class USceneComponent*> UText3DComponent::GetGlyphKerningComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "GetGlyphKerningComponents");

	Params::UText3DComponent_GetGlyphKerningComponents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text3D.Text3DComponent.GetGlyphKerningComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USceneComponent* UText3DComponent::GetGlyphKerningComponent(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "GetGlyphKerningComponent");

	Params::UText3DComponent_GetGlyphKerningComponent_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text3D.Text3DComponent.GetGlyphCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UText3DComponent::GetGlyphCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "GetGlyphCount");

	Params::UText3DComponent_GetGlyphCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text3D.Text3DComponent.GetFormattedText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UText3DComponent::GetFormattedText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "GetFormattedText");

	Params::UText3DComponent_GetFormattedText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Text3D.Text3DComponent.GetBounds
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Origin                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BoxExtent                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UText3DComponent::GetBounds(struct FVector* Origin, struct FVector* BoxExtent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Text3DComponent", "GetBounds");

	Params::UText3DComponent_GetBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);

	if (BoxExtent != nullptr)
		*BoxExtent = std::move(Parms.BoxExtent);

}


// Class Text3D.Text3DEngineSubsystem
// (None)

class UClass* UText3DEngineSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Text3DEngineSubsystem");

	return Clss;
}


// Text3DEngineSubsystem Text3D.Default__Text3DEngineSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UText3DEngineSubsystem* UText3DEngineSubsystem::GetDefaultObj()
{
	static class UText3DEngineSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UText3DEngineSubsystem*>(UText3DEngineSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


