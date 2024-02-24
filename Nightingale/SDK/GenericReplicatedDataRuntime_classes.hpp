#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GenericReplicatedDataRuntime.GenericReplicatedDataFunctionLibrary
class UGenericReplicatedDataFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGenericReplicatedDataFunctionLibrary* GetDefaultObj();

	void GetGenericReplicatedDataAsVector(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasVector, struct FVector* Vector);
	void GetGenericReplicatedDataAsTransform(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasTransform, struct FTransform* Transform);
	void GetGenericReplicatedDataAsText(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasText, class FText* Text);
	void GetGenericReplicatedDataAsTagContainer(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasTagContainer, struct FGameplayTagContainer* TagContainer);
	void GetGenericReplicatedDataAsString(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasString, class FString* String);
	void GetGenericReplicatedDataAsRotator(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasRotator, struct FRotator* Rotator);
	void GetGenericReplicatedDataAsObjects(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasObjects, TArray<class UObject*>* Objects);
	void GetGenericReplicatedDataAsNameArray(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasNameArray, TArray<class FName>* NameArray);
	void GetGenericReplicatedDataAsName(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasName, class FName* Name);
	void GetGenericReplicatedDataAsInt64(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasInt64, int64* Int64);
	void GetGenericReplicatedDataAsInt(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasInt, int32* Int);
	void GetGenericReplicatedDataAsHitResult(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasHitResult, struct FHitResult* HitResult);
	void GetGenericReplicatedDataAsGameplayTag(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* bHasGameplayTag, struct FGameplayTag* GameplayTag);
	void GetGenericReplicatedDataAsFloat(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasFloat, float* Float);
	void GetGenericReplicatedDataAsDataTableRowHandleArray(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasDataTableRowHandleArray, TArray<struct FDataTableRowHandle>* DataTableRowHandleArray);
	void GetGenericReplicatedDataAsDataTableRowHandle(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* bHasDataTableRowHandle, struct FDataTableRowHandle* DataTableRowHandle);
	void GetGenericReplicatedDataAsClass(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasClass, TSubclassOf<class UObject>* Class);
	void GetGenericReplicatedDataAsByte(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasByte, uint8* Byte);
	void GetGenericReplicatedDataAsBool(struct FGenericReplicatedDataHandle& GenericReplicatedData, int32 Index, bool* HasBool, bool* Bool);
	class FString GetDebugString(struct FGenericReplicatedDataHandle& GenericReplicatedData);
	int32 GetDataCount(struct FGenericReplicatedDataHandle& GenericReplicatedData);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromVector(struct FVector& Vector);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromTransform(struct FTransform& Transform);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromText(class FText& Text);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromTagContainer(struct FGameplayTagContainer& TagContainer);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromString(const class FString& String);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromRotator(struct FRotator& Rotator);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromObjects(TArray<class UObject*>& Objects);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromNameArray(TArray<class FName>& NameArray);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromName(class FName& Name);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromInt64(int64 Int64);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromInt(int32 Int);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromHitResult(struct FHitResult& HitResult);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromGameplayTag(struct FGameplayTag& GameplayTag);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromFloat(float Float);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromDataTableRowHandleArray(TArray<struct FDataTableRowHandle>& DataTableRowHandleArray);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromDataTableRowHandle(struct FDataTableRowHandle& DataTableRowHandle);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromClass(TSubclassOf<class UObject>& Class);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromByte(uint8 Byte);
	struct FGenericReplicatedDataHandle GenericReplicatedDataFromBool(bool Bool);
	bool CreateGenericReplicatedDataHandle(TArray<struct FGenericDataInitializationField>& InputData, struct FGenericReplicatedDataHandle* OutHandle);
	bool CompareHandles(struct FGenericReplicatedDataHandle& A, struct FGenericReplicatedDataHandle& B);
	struct FGenericReplicatedDataHandle AppendGenericReplicatedData(TArray<struct FGenericReplicatedDataHandle>& GenericReplicatedData);
};

}


