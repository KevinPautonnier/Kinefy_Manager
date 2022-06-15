// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "CustomSerialize.generated.h"

/**
 * 
 */
UCLASS()
class KINEFY_MANAGER_API UCustomSerialize : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, CATEGORY = "Serialize")
	static TArray<uint8> Custom_StringToBytes(FString input);
};
