#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// Class GbxSpark.EnumerateTelemetryCommandlet
class UEnumerateTelemetryCommandlet : public UCommandlet
{
public:

	static class UClass* StaticClass();
	static class UEnumerateTelemetryCommandlet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxSpark.SparkBlueprintLibrary
class USparkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USparkBlueprintLibrary* GetDefaultObj();

	void PostLeviathanEventWithAttribute(class APlayerController* PlayerController, const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue);
	void PostLeviathanEvent(class APlayerController* PlayerController, const class FString& EventName);
};

}


