#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x78 - 0x38)
// BlueprintGeneratedClass an_akAudioNotify__CGAI_damage.an_akAudioNotify__CGAI_damage_C
class UAn_akAudioNotify__CGAI_damage_C : public UAnimNotify
{
public:
	class FString                                AttachName;                                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Follow;                                            // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1558[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventName;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  UseCustomComponentByName;                          // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDefaultWhenCustomNotFound;                      // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1560[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         Event;                                             // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAn_akAudioNotify__CGAI_damage_C* GetDefaultObj();

	void GetAkComponentByName(class USkeletalMeshComponent* SkeletalMesh, class FName Name, class UAkComponent** FoundAK, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UAkComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UAkComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class ACGAICharacter* CastedCGAICharacter, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, const struct FCGAIProperties& CallFunc_GetAIProperties_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, class UAkAudioEvent* K2Node_Select_Default, class FName CallFunc_Conv_StringToName_ReturnValue, class UAkAudioEvent* Temp_object_Variable, class UAkComponent* CallFunc_GetAkComponentByName_FoundAK, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_GetAkComponent_ComponentCreated, class UAkComponent* CallFunc_GetAkComponent_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool Temp_bool_Variable_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UAkAudioEvent* K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UAkAudioEvent* K2Node_Select_Default_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue);
};

}


