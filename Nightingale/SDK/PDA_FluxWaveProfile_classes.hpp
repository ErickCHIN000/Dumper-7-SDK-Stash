#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// BlueprintGeneratedClass PDA_FluxWaveProfile.PDA_FluxWaveProfile_C
class UPDA_FluxWaveProfile_C : public UPrimaryDataAsset
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTexture*                              WaveProfileForwardMap;                             // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              WaveProfileInverseMap;                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          WaveProfileDecode;                                 // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Frames;                                            // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WaveHeight;                                        // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPDA_FluxWaveProfile_C* GetDefaultObj();

	void GetExternalReferences(TArray<class UTexture*>* Objects, TArray<class UTexture*>& K2Node_MakeArray_Array);
	void CopyPropertiesToObject(class UObject* Destination, bool* Done);
	void ApplyWaveProfileNiagaraData(class UNiagaraComponent* NiagaraSystem, const struct FVector4& CallFunc_MakeVector4_ReturnValue, double CallFunc_MakeVector4_X_ImplicitCast, double CallFunc_MakeVector4_Y_ImplicitCast, double CallFunc_MakeVector4_Z_ImplicitCast, double CallFunc_MakeVector4_W_ImplicitCast);
	void ApplyWaveProfileMaterialData(TArray<class UMaterialInstanceDynamic*>& Materials, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void SetWaveProfileData(class UTexture* WaveProfilesForward, class UTexture* WaveProfilesInverse, const struct FLinearColor& WaveProfileDecode, int32 Frames, int32 WaveWidth, int32 WaveHeight);
	void ClearExternalReferences();
	void ExecuteUbergraph_PDA_FluxWaveProfile(int32 EntryPoint);
};

}


