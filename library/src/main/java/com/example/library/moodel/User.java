package com.example.library.moodel;

import lombok.Getter;
import lombok.Setter;

import javax.persistence.Entity;
import javax.persistence.Table;

@Entity
@Getter
@Setter
@Table(schema = SchemaName.SchemaName)
public class User extends BaseEntity {
    private String username;

    private String password;
}
