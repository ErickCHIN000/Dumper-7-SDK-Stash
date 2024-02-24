#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2B0 - 0x2A8)
// BlueprintGeneratedClass BP_ResourceIIMProxy.BP_ResourceIIMProxy_C
class ABP_ResourceIIMProxy_C : public AInteractiveInstancedMeshProxyActor2
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ResourceIIMProxy_C* GetDefaultObj();

	void ValidateInstance(bool* PassedValidation, TArray<class FText>* ValidationErrors, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ResourceIIMProxy(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue);
};

}


